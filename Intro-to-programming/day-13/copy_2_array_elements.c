#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i < n; i++){
    scanf("%d", &a[i]);
  }
  int m;
  scanf("%d", &m);
  int b[m];
  for(int i=0; i < m; i++){
    scanf("%d", &b[i]);
  }
  int c[n+m];
  for(int i=0; i < n; i++){ //copying first array
    c[i] = a[i];
  }
  for(int i=0; i < m; i++){ //copying 2nd array
    c[i+n] = b[i];
  }
  for(int i = 0; i < n+m; i++){ // printing array after copying both given array in 3rd array
    printf("%d ", c[i]);
  }
  return 0;
}