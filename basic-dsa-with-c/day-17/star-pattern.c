#include <stdio.h>
int main(){
  int n, star = 1; // star is a flag value for increasing and printing the star
  scanf("%d", &n);
  for(int i=1; i <= n; i++){ //this loop for printing lines
    for(int j=1; j <= star; j++){ // loop for printing stars
      printf("*");
    }
    printf("\n");
    star++;
  }
  return 0;
}