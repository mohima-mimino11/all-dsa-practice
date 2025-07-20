#include <stdio.h>

int sum(){
  int a, b;
  scanf("%d %d", &a, &b);
  int ans = a + b;
  return ans;
}
int main(){
  int val = sum();
  printf("%d", val);
  return 0;
}