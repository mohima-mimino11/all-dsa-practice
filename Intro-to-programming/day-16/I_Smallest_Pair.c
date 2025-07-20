#include <stdio.h>
#include <limits.h>
int main(){
  int tc;
  scanf("%d", &tc);
  for(int t=1; t <= tc; t++){
    int n;
    scanf("%d", &n);
    int a[n+1];
    for(int k=1; k <= n; k++){
      scanf("%d", &a[k]);
    }
    int min = INT_MAX;
    for(int i=1; i <= n; i++){
      for(int j=i+1; j <=n; j++){
        int value = a[i] + a[j] + j - i;
        if(min > value){
          min = value;
        }
      }
    }
    printf("%d\n", min);
  }
  return 0;
}