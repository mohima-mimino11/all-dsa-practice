#include <stdio.h>
int main(){
  int a[5] = {10, 20, 30, 40, 50}; // array name itself is a pointer
  // printf("%p\n", &a[0]);
  // printf("%p\n", &a[1]);
  // printf("%p\n", &a[2]);
  // printf("%p\n", &a[3]);
  // printf("%p\n", &a[4]);
  printf("Array 0th index address: %p\n", &a[0]);
  printf("Array name address: %p\n", a);
  printf("Array value by dereferencing: %d\n", *a);
  *(a+2) = 100;
  for(int i = 0; i < 5; i++){
    printf("%d ", a[i]);
  }
  return 0;
}