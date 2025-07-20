#include <stdio.h>
#include <string.h>
int main(){
  char a[101], b[101];
  scanf("%s %s", &a, &b);
  // mechanism behind strcat() function
  // int len_a = strlen(a);
  // int len_b = strlen(b);
  // for(int i = 0; i <= len_b; i++){
  //   a[i + len_a] = b[i];
  // }
  // shortcut built-in function
  strcat(a, b); // a is where we want store the concated string and b is the string we want to concat
  printf("%s %s", a, b);
  return 0;
}