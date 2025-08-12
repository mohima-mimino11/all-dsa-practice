#include <stdio.h>
void recursion_digit(int n){
  if(n == 0){
    return;
  }
  recursion_digit(n/10);
  int last = n % 10;
  printf("%d ", last);
  
}
int main(){
  int tc;
  scanf("%d", &tc);
  for(int t = 0; t < tc; t++){
    int n;
    scanf("%d", &n);
    if(n == 0){
      printf("0");
    }
    recursion_digit(n);
    printf("\n");
  }
  
  return 0;
}