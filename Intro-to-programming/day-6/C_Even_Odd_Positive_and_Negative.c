#include <stdio.h>
int main(){
  int n;
  scanf("%d\n", &n);
  int even = 0, odd = 0, neg = 0, pos = 0;
  for(int i=1; i <=n; i++){
    long long int x;
    scanf("%lld ", &x);
    if(x%2 == 0){
     even++;
    }
    else{
      odd++;
    } 
    if(x < 0){
      neg++;
    }
    else if(x > 0){
      pos++;
    }
  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
  return 0;
}