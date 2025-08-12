// #include <stdio.h>
// // variable scopes
// void sum(){
//   int y = 10;
//   printf("sum -> %d\n", y);
// }
// int main(){
//   int x = 20;
//   printf("main -> %d\n", x);
//   sum();
//   return 0;
// }
#include <stdio.h>
// variable scopes
int x = 50; // global variable
void sum(){
  
  printf("sum -> %d\n", x);
}
int main(){
 
  printf("main -> %d\n", x);
  sum();
  return 0;
}