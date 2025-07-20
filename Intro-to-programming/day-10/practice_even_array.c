// Take an array from input and print all the even numbers of that array.

#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0){
      printf("%d ", a[i]);
    }
  }
  return 0;
}