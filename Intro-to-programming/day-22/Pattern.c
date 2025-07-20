#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void space_printer(int count){
  for(int i = 1; i <= count; i++){
    printf(" ");
  }
}

void hash_dash_printer(int count, int line_number){
  char ch;
  if(line_number % 2 == 1 ){
    ch = '#';
  } else {
    ch = '-';
  }
  for(int i = 1; i <= count; i++){
    printf("%c", ch);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  int hash_dash_tracker = 1;
  int space_tracker = n - 1;

  // 1st half
  for(int i = 1; i <= n; i++){
    space_printer(space_tracker);
    hash_dash_printer(hash_dash_tracker, i);
    printf("\n");
    hash_dash_tracker += 2;
    space_tracker--;
  }

  // 2nd half
  hash_dash_tracker -= 4;
  space_tracker = 1;
  for(int i = n + 1; i <= 2 * n - 1; i++){
    space_printer(space_tracker);
    hash_dash_printer(hash_dash_tracker, i);
    printf("\n");
    hash_dash_tracker -= 2;
    space_tracker++;
  }

  return 0;
}
