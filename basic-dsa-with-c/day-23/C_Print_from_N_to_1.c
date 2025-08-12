#include <stdio.h>
void print_to_1(int i){
  if(i == 0){
    return;
  }
  printf("%d", i);
  if(i > 1){
    printf(" ");
  }
  print_to_1(i - 1);
}
int main(){
  int n;
  scanf("%d", &n);
  print_to_1(n);
  return 0;
}