#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
      scanf("%d", &a[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    a[index] = value;
    for(int i = n-1; i >=0; i--){
      printf("%d ", a[i]);
    } 
    return 0;
}
