#include <stdio.h>
int main(){
  int a[5];
  for(int i = 0; i<=4; i++){
    scanf("%d", &a[i]);
  }
  for(int j=0; j <= 4; j++){
    printf("%d ", a[j]);
  }
  return 0;
}