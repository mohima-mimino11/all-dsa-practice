#include <stdio.h>
#include <math.h>
int main(){
  int ans = ceil(3.4);
  printf("%d\n", ans);
  int ans2 = floor(3.4);
  printf("%d\n", ans2);
  int ans3 = round(3.5);
  printf("%d\n", ans3);
  int ans4 = round(3.2);
  printf("%d\n", ans4);
  int ans5 = sqrt(64);
  printf("%d\n", ans5);
  double ans6 = sqrt(20);
  printf("%lf\n", ans6);
  int ans7 = pow(4, 3);
  printf("%d\n", ans7);
  int ans8 = abs(-12);
  printf("%d\n", ans8);
  
  return 0;
}