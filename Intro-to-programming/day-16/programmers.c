#include <stdio.h>
int main(){
  double n, m, d;
  scanf("%lf %lf %lf", &n, &m, &d);
  double days_needed = (n * d) / (n+m);
  double reduce_days = d - days_needed;
  if(days_needed - (int) days_needed == 0){
    printf("%d\n", (int)days_needed);
  }
  else{
    printf("%d\n", (int) days_needed+1);
  }
  printf("%d", (int)reduce_days);
  return 0;
}