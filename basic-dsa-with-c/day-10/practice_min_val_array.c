// Take an array from input and print the minimum value of that array.
#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  int min = a[0];
  for(int i = 0; i < n; i++){
    if(a[i] < min){
      min = a[i];
    }
  }
  printf("%d", min);
  return 0;
}