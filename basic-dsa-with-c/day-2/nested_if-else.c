#include <stdio.h>

int main(){
  int tk;
  scanf("%d", &tk);
  if(tk >= 5000){
    printf("Will Visit Cox's Bazar\n");
    if(tk >= 10000){
      printf("Will Visit Saint Martin too.\n");
    }
    else{
      printf("Will return from Cox's\n");
    }
  }
  else{
    printf("Will not visit any place\n");
  }
  return 0;
}