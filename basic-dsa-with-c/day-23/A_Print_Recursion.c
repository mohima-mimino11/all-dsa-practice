#include <stdio.h>
void love_recursion(int n){
  if(n == 0){
    return;
  }
  printf("I love Recursion\n");
  love_recursion(n-1);
}
int main(){
  int n;
  scanf("%d", &n);
  love_recursion(n);
  return 0;
}