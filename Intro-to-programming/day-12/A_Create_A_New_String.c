#include <stdio.h>
#include <string.h>
int main(){
  char str1[1001], str2[10001];
  scanf("%s %s", &str1, &str2);
  int length_str1 = strlen(str1);
  int length_str2 = strlen(str2);
  printf("%d %d\n", length_str1, length_str2);
  printf("%s %s\n", str1, str2);
  return 0;
}