#include <stdio.h>
int main(){
  int n; // star is a flag value for increasing and printing the star
  scanf("%d", &n);
  int val = 1;
  int space = n-1;
  for(int i=1; i <= n; i++){ //this loop for printing lines
    for(int k=1;k<= space; k++){ // loop for printing space
      printf(" ");
    }
    for(int j=1; j <= val; j++){ // loop for printing vals
      printf("%d ", j);
    }
    printf("\n");
    val++;
    space--;
  }
  return 0;
}