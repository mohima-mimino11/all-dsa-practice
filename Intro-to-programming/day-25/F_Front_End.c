#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  int l = 0, r = n - 1;
  while (l <= r)
  {
    if (l == r) {
      printf("%d ", a[l]);  // same element, print once
    } else {
      printf("%d %d ", a[l], a[r]);  // print front and back
    }
    l++;
    r--;
  }
  
  printf("\n");
  return 0;
}