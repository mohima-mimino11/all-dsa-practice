#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  // n = n / 1000;
  // if(n % 2 == 0){
  //   printf("EVEN");
  // }
  // else{
  //   printf("ODD");
  // }
  int last_two_digit = n % 100;
  printf("%d", last_two_digit);
  return 0;
}