#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int a[], int n){
  int count = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == 1){
      break;
    }
    count++;
  }
  return count;
}

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  int n; 
  scanf("%d", &n);
  int a[n];
  ;
  for(int i=0; i < n; i++){
    scanf("%d", &a[i]);
  }
  int count= count_before_one(a, n);
  printf("%d\n", count);  
  return 0;
}
