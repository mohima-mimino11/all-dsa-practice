#include <stdio.h>
void hello(int i){ //recursive function
  if(i == 6){ // base case
    return;
  }
  
  hello(i+1);
  printf("%d\n", i);
}
int main(){
  
  hello(1);
  return 0;
}

