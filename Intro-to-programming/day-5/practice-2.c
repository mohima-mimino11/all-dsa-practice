#include <stdio.h>
int main(){
  long long int x, y;
  scanf("%lld %lld", &x, &y);
  int sum = x + y;
  long long int mul = x * y;
  int sub = x - y;
  printf("%lld + %lld = %d\n", x, y, sum);
  printf("%lld * %lld = %lld\n", x, y, mul);
  printf("%lld - %lld = %d", x, y, sub);
  return 0;
}