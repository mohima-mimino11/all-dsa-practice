#include <stdio.h>
int main(){
  int correctPass = 1999;
  int n;
  while (scanf("%d\n", &n))
  {
    /* code */
    if(n == correctPass){
      printf("Correct\n");
      break;
    }
    else{
      printf("Wrong\n");
    }
  }
  return 0;
}