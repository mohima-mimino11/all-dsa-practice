#include <stdio.h>

int main(){
  float a = 12;
  int b = 5;
  int sum = a + b;
  printf("Sum is %d\n", sum);
  int sub = a - b;
  printf("Subtraction is %d\n", sub);
  int mul = a * b;
  printf("Multiplication is %d\n", mul);
  float div = a / b;
  printf("Division is %.2f\n", div);
  return 0;
}