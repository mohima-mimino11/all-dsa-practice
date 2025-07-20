#include <stdio.h>
// void m(int *p){
//   int i = 0;
//   for(i = 0; i < 5; i++){
//     printf("%d ", p[i]);
//   }
// }
int main(){
  int ary[4] = {1, 2, 3, 4};
  int *p;
  p = ary + 3;
  *p = 5;
  printf("%d\n", ary[3]);
  // printf("%d\n", *ary);
  return 0;
}