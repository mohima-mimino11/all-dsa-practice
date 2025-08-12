#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int a[n];
    int pos_sum = 0, neg_sum = 0;
    for(int i=0; i < n; i++){
      scanf("%d", &a[i]);
      if(a[i] > 0){
        pos_sum += a[i];
      }
      if(a[i] < 0){
        neg_sum += a[i];
      }
    }
    printf("%d %d", pos_sum, neg_sum);   
    return 0;
}
