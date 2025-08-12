#include <stdio.h>
// void m(){
//   printf("hi");
// }
// int main(){
//   m();
//   return 0;
// }
int sum(int x, int y){
  int res = x + y;
  return res;
}
int main(){
  printf("%d", sum(5,6));
  return 0;
}