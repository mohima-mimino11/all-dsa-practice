#include <stdio.h>
// void scanf(int* x){
//   // code to take input and put variable in a certain address
// }
int main(){
  int x;
  scanf("%d", &x);// and here the values address is passed as a reference
  printf("%d", x);
  return 0;
}