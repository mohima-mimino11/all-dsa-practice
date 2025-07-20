#include <stdio.h>
int main()
{
  // int x=0;
  // printf("%d %d %d", a, b, c);
  // if(x < 5){
  //   printf("hello");
  // }
  // if(x <= 10){
  //   printf("hi");
  // }
  // else{
  //   printf("no");
  // }
  // if(x == 1){
  //   if(x >= 0){
  //     printf("true\n");
  //   }else{
  //     printf("false\n");
  //   }
  // }
  int x = 5;
  int y = 4;
  if (x >= y && x < y + 4)
  {
    if (y < 5)
    {
      printf("hi ");
    }
    else if (y < 10)
    {
      printf("hi ");
    }
  }
  else
  {
    printf("hello ");
  }

  return 0;
}