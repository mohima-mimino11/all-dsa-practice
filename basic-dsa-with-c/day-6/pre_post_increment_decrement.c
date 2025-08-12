// #include <stdio.h>
// int main(){
//   int x = 10;
//   int y = x++;// y = 10 x= 11
//   int z = ++y; // y = 11 x=11 z=11
//   printf("%d ", z++); // z=11
//   // z=12 if there was a print statement
//   return 0;
// }

// #include <stdio.h>
// int main(){
//   int x = 10;
//   ++x;
//   printf("%d ", ++x); // 12
//   return 0;
// }

#include <stdio.h>
int main(){
  int x = 10;
  --x;
  printf("%d\n", x--); // 9
  printf("%d", x); // 8
  return 0;
}