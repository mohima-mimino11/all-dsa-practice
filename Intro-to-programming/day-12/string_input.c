#include <stdio.h>
#include <string.h>
int main(){
  char s[10];
  printf("%d\n", s[5]); //garbage value
  scanf("%s", &s);// scanf() function stops taking input when it reaches a space character
  printf("%s\n", s);
  printf("%d\n", s[5]);// null character
  printf("%d", s[6]);// garbage value

  return 0;
}