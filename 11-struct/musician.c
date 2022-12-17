//
// Created by hfwei on 2022/12/8.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum gender {
  MALE, FEMALE,
} Gender;

typedef struct score {
  int c_score; // 4
  int java_score; // 4
  int python_score; // 4 (+4)
} Score;

// tag
typedef struct musician {
  char *name; // 8
  Gender gender; // 1 (+ 7)
  char *album; // 8

  Score score;
} Musician;

void PrintMusician(const Musician *m);
int CompareMusicians(const void *m1, const void *m2);

int main() {
  printf("sizeof Musician : %zu\n", sizeof(Musician));

  Musician luo = {
      .name = "luo dayou",
      .gender = MALE,
      .album = "ZhiHuZheYe",
      .score = {10, 20, 30},
      // .score.c_score = 10,
      // .score.java_score = 20,
      // .score.python_score = 30,
  };

  Musician cui = {
      .name = "cui jian",
      .gender = MALE,
      .album = "XinChangZhengLuShangDeYaoGun",
      .score.c_score = 10,
      .score.java_score = 20,
      .score.python_score = 30,
  };

  char album[] = "YiKeBuKenMeiSuDeXin";

  Musician zhang = {
      .name = "zhang chu",
      .gender = MALE,
      .album = album,
      .score.c_score = 10,
      .score.java_score = 20,
      .score.python_score = 30,
  };

  Musician guo = zhang;
  guo.name = "guo";

  strcpy(guo.album, "YiKeJiuMeiSuDeXin");
  PrintMusician(&guo);
  PrintMusician(&zhang);

  Musician musicians[] = {luo, cui, zhang};
  int len = sizeof musicians / sizeof *musicians;
  for (int i = 0; i < len; i++) {
    PrintMusician(musicians + i);
  }

  qsort(musicians, len,
        sizeof *musicians, CompareMusicians);
  for (int i = 0; i < len; i++) {
    PrintMusician(musicians + i);
  }

  return 0;
}

void PrintMusician(const Musician *m) {
  printf("\n%s\t%d\t%s\t%d\t%d\t%d\n",
         m->name,
         m->gender,
         m->album,
         m->score.c_score,
         m->score.java_score,
         m->score.python_score);
}

// actual argument: const Musician *
int CompareMusicians(const void *m1, const void *m2) {
  const Musician *m_left = m1;
  const Musician *m_right = m2;
  return strcmp(m_left->album, m_right->album);
}