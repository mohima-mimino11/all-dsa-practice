#include <stdio.h>
int main(){
  int t, width, height;
  scanf("%d", &t);
  for(int i =0; i < t; i++){
    scanf("%d %d\n", &width, &height);
    if(width == height){
      printf("Square\n");
    }else{
      printf("Rectangle\n");
    }
  }
  return 0;
}