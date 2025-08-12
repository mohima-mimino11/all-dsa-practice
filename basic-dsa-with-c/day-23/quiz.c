// #include <stdio.h>
// void fun(){
//   printf("fun\n");
// }
// int main(){
//   fun();
//   return 0;
// }
#include <stdio.h> 
void f2() 
{ 
  printf("f1 "); 
} 
void f1() 
{ 
  printf("f2 "); 
  f2(); 
} 
int main() 
{ 
 printf("Main "); 
 f1(); 
}