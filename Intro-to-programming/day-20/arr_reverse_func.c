#include <stdio.h>
void reverse_arr(int a[], int n){
  for(int i=0, j = n - 1; i < j; i++, j--){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
}
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i < n; i++){
    scanf("%d", &a[i]);
  }
  reverse_arr(a, n);
  for(int i = 0; i < n; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}