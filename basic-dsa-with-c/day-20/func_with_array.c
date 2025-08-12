#include <stdio.h>
void fun(int a[]){
  a[1] = 100;
  printf("Fun function: %p\n", a);
  for(int i=0; i < 5; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}
int main(){
  int a[5] = {10, 20, 30, 40, 50};
  fun(a);
  printf("Main function: %p\n", a);

  
  return 0;
}