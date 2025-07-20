#include <stdio.h>
void mello(){
  printf("mello\n");
}
void gello(){
  printf("gello\n");
  mello();
}
void hello(){
  printf("Hello\n");
  gello();
}
int main(){
  printf("Hi\n");
  hello();
  return 0;
}

// call stack follows LIFO pattern in function calling in it's stack last function that comes in stack that get's out of stack first and the first function that comes in stack get's out of stack in the last.