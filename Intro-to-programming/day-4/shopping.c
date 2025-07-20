#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int taka;
    scanf("%d", &taka);
    if(taka > 1000){
      printf("I will buy Punjabi\n");
      taka = taka - 1000;
      if(taka >= 500){
        printf("I will buy new shoes\nAlisa will buy new shoes\n");
      }
    }else{
      printf("Bad luck!\n");
    }
    return 0;
}