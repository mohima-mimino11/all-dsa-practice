#include <stdio.h>
int main(){
  int T;
  scanf("%d\n", &T);
  for(int tc=1; tc <= T; tc++){
    int N;
    scanf("%d\n", &N);
    long long int fact = 1;
    for(int i=1; i <= N; i++){
      fact = fact * i;
    }
    printf("%lld\n", fact);
    
  }
  
  return 0;
}