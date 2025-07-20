#include <stdio.h>
#include <string.h>
int main(){
  char s[50];
  fgets(s,25,stdin); // fgets() function takes "enter" as an input in strings and immediately stop taking input
  printf("%s", s);
  return 0;
}