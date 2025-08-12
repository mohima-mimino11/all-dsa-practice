#include <stdio.h>
#include <string.h>
int main(){
  char a[101], b[101];
  scanf("%s %s", &a, &b);
  // mechanism behind strcpy() function
  // int len_b = strlen(b);
  // for(int i = 0; i <= len_b; i++){ //to copy null char too
  //   a[i] = b[i];
  // }
  // shortcut built-in function
  strcpy(a, b); // a is where we want store the copied string and b is the string we want to copy
  printf("%s %s", a, b);
  return 0;
}