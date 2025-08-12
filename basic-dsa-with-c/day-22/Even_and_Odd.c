#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even( ){
  int n;
  scanf("%d", &n);
  int a[n];
  int even_count = 0;
  int odd_count = 0;
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
    if(a[i] % 2 == 0){
      even_count++;
    }else if(a[i] % 2 != 0){
      odd_count++;
    }
  }
  printf("%d %d\n", even_count, odd_count);
  
}
int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  odd_even();
  return 0;
}
