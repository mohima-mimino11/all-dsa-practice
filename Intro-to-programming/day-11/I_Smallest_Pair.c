#include <stdio.h>
int main(){
  int t;
  scanf("%d", &t);
  
  for(int tc=0; tc < t; tc++){
    int n;
    scanf("%d", &n);
    long long int a[n];
    for(long long int i = 0; i < n; i++){
      scanf("%lld", &a[i]);
      // printf("%d ", a[i]);
    }
    int min_sum = 1000;
    for(int i=0, j=i+1; i < j, j < n;i++, j++){
      int arr_sum = a[i] + a[j] + j - i;
      if(arr_sum < min_sum){
        min_sum = arr_sum;
      }
    }
    printf("%d\n", min_sum);
  }
  return 0;
}