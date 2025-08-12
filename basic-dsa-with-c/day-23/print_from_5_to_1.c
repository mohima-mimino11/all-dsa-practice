#include <stdio.h>
void hello(int i){ //recursive function
  if(i == 0){ //base case
    return;
  }
  printf("%d\n", i);
  hello(i-1);
}
int main(){
  hello(5);
  return 0;
}

