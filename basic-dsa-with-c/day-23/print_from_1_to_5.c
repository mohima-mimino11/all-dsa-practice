#include <stdio.h>
void hello(int i){ //recursive function
  if(i == 6){ // recursion call stack controlling condition is called base case
    return;
  }
  printf("%d\n", i);
  hello(i+1);
}
int main(){
  int i = 1;
  hello(i);
  return 0;
}

