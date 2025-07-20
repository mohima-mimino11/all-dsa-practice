#include <stdio.h>
void min_max(int a[], int n, int *min, int *max){
  *max = 0;
  *min = a[0];
  for(int i = 0; i < n; i++){
    if(a[i] > *max){
      *max = a[i];
    }
    if(a[i] < *min){
      *min = a[i];
    }
  }
  
}
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i < n; i++){
    scanf("%d", &a[i]);
  }
  int min, max;
  min_max(a, n, &min, &max);
  printf("%d %d\n", min, max);

  return 0;
}