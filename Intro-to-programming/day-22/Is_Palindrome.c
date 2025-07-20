#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char s[]){
  int l = 0, r = strlen(s) - 1, pal = 1;
  while(l < r){
    if(s[l] != s[r]){
      pal = 0;
      break;
    }
    l++;
    r--;
  }
  return pal;
} 
int main() {
  
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  char s[1001];
  scanf("%s", s);
  int pal = is_palindrome(s);
  if(pal == 1){
    printf("Palindrome\n");
  }else{
    printf("Not Palindrome\n");
  }
  return 0;
}
