#include <stdio.h>
int main(){
  // int n;
  // scanf("%d", &n);
  // int a[n];
  // for(int i = 0; i < n; i++){
  //   scanf("%d", &a[i]);
  // }
  int a[5] = {1, 2, 3, 4, 5};
  int sum = 0;
  for(int i = 0; i < 3; i++){
    sum += a[i];
  }
  printf("%d", sum);
  return 0;
}