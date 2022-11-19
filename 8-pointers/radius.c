/**
 * file: radius.c
 *
 * Created by hengxin on 11/18/22.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  /********** On radius **********/
  // type: int; value: 10; address: &radius (&: address-of operator)
  int radius = 10;

  printf("radius = %d\n", radius);
  printf("The address of radius is %p\n", &radius);

  // radius as a lvalue (space, memory, storage, address)
  radius = 20;
  // radius as a rvalue (value)
  double circumference = 2 * 3.14 * radius;
  printf("radius = %d; circumference = %f\n", radius, circumference);
  /********** On radius **********/

  /********** On ptr_radius1 **********/
  // type: int *; value: &radius; address: &ptr_radius1
  int *ptr_radius1 = &radius;
  printf("The address of ptr_radius1 is %p\n", &ptr_radius1);
  /********** On ptr_radius1 **********/

  /********** On *ptr_radius1 **********/
  // *ptr_radius1 behaves like radius
  // *: indirection/dereference (间接寻址/解引用　运算符)
  // radius = 100;
  // *ptr_radius1 as a lvalue
  *ptr_radius1 = 100;
  printf("The value of radius is %d\n", radius);

  // *ptr_radius1 as a rvalue
  circumference = 2 * 3.14 * (*ptr_radius1);
  printf("circumference = %f\n", circumference);
  /********** On *ptr_radius1 **********/

  /********** On ptr_radius1 again **********/
  int radius_1 = 1000;
  int *ptr_radius_1 = &radius_1;
  ptr_radius1 = ptr_radius_1;
  *ptr_radius1 = 2000;
  printf("The value of radius1 is %d\n", *ptr_radius_1);
  /********** On ptr_radius1 again **********/

  /********** On array names **********/
  int arr[] = {1, 2, 3};
  // arr++;
  int *ptr_arr = arr;
  /********** On array names **********/

  /********** On malloc/free **********/
  int array[5] = {0};
  // (3) free(array);
  /********** On malloc/free **********/

  /********** On const **********/
  const int *const_radius = &radius;
  radius = 20;
  // *const_radius = 20;
  const int *radius_4 = const_radius;
  // *radius_4 = 20;

  // const int *
  int const *const_radius1 = &radius;

  int *const const_radius2 = &radius;

  const int *const const_radius3 = &radius;
  /********** On const **********/
}