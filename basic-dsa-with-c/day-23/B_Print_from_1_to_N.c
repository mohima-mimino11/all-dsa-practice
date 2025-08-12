#include <stdio.h>
void print_to_n(int i, int n){
  if(i == n+1){ // base case
    return;
  }
  printf("%d\n", i);
  print_to_n(i+1, n);
}
int main(){
  int n;
  scanf("%d", &n);
  print_to_n(1, n);
  return 0;
}

