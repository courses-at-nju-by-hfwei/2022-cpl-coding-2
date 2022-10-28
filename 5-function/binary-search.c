// Created by hfwei on 2022/10/13.
//

#include <stdio.h>

#define LEN 10

/**
 * Search for the key in the dict.
 * @param key the key to search for
 * @param dict the dictionary to search in
 * @param len the length of the dict
 * @return the index of the key in the dict if found, -1 otherwise
 */
int BinarySearch(int key, const int dict[], int len);

int main() {
  // out of any functions; global variables
  // scope: life time (file scope)
  int dictionary[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

  int key = 0;
  scanf("%d", &key);

  int index = BinarySearch(key, dictionary, LEN);
  if (index == -1) {
    printf("Not found!\n");
  } else {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}

int BinarySearch(int key, const int dict[], int len) {
  int low = 0;
  int high = len - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (key > dict[mid]) {
      low = mid + 1;
    } else if (key < dict[mid]) {
      high = mid - 1;
    } else {
      return mid;
    }
  }

  return -1;
}