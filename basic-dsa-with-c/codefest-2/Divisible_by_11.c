#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char s[101];
  scanf("%s", &s);
  int sumOfOdd = 0, sumOfEven = 0;
  for(int i = 0; i < strlen(s); i++){
    if(i % 2 == 0){
      sumOfEven += s[i] - '0';
    }
    else{
      sumOfOdd += s[i] - '0';
    }
  }
  int difference = abs(sumOfOdd - sumOfEven);
  if(difference % 11 == 0){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
