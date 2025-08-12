#include <stdio.h>
void print_even_index(int a[], int n, int i){
  if(i == n){ // base case
    return;
  }
  print_even_index(a, n, i+1);
  if(i % 2 == 0){
    printf("%d ", a[i]);
  }
}
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  print_even_index(a, n, 0);
  return 0;
}