#include <stdio.h>
int main(){
  int x = 10;
  printf("%d\n", x);
  printf("%p\n", &x);
  int* ptr;
  ptr = &x;
  printf("%p\n", ptr);
  printf("%p\n", &ptr);
  printf("%d\n", *ptr);
  *ptr = 200; // dereferencing a pointer
  printf("%d\n", x);
  return 0;
}