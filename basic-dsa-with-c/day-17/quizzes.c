#include <stdio.h>
int main(){
  // for(int i = 1; i <= 3; i++){
  //   for(int j=1; j <= i; j++){
  //     printf("%d ", j);
  //   }
  // }
  for(int i = 1; i <= 4; i++){
    for(int j=1; j <= i; j++){
      printf("*");
    }
  }
  // for(int i = 1; i <= 3; i++){
  //   for(int j=1; j <= 3; j++){
  //     printf("%d ", i);
  //   }
  // }
  // for(int i = 1; i <= 5; i += 2){
  //   for(int j=1; j <= i; j++){
  //     printf("*");
  //   }
  //   printf("\n");
  // }
  // int num = 1;
  // for(int i = 1; i <= 3; i++){
  //   for(int j=1; j <= i; j++){
  //     printf("%d ", num++);
  //   }
  //   printf("\n");
  // }
  // for(int i = 3; i <= 1; i--){
  //   for(int j=1; j <= i; j++){
  //     printf("*");
  //   }
  //   printf(" ");
  // }
  return 0;
}