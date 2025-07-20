#include <stdio.h>
int main(){
  int a[5] ={20, 2, 12, 34, 56};
  int b[5] = {0}; // only possible in fixed size array
  for(int i=0; i < 5; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  for(int i=0; i < 5; i++){
    printf("%d ", b[i]);
  }
  return 0;
}