#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int star = n;
  int space = 0;
  for(int i = 1; i <= n; i++){
    for(int k=1; k <= space; k++){
      printf(" ");
    }
    for(int j=1; j <= star; j++){
      printf("*");
    }
    printf("\n");
    star--;
    space++;
  }
  return 0;
}