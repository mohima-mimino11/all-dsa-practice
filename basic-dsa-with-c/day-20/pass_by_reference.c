#include <stdio.h>
void fun(int* p){
  *p = 20;
  // printf("Fun function x address: %p\n", &x);

}
int main(){
  int x = 10;
  fun(&x); // we're passing only the address of x here
  printf("%d\n", x);
  // printf("Main function x address: %p\n", &x);
  return 0;
}  