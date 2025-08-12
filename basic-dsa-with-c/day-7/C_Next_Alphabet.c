#include <stdio.h>
int main(){
  char alpha;
  scanf("%c", &alpha);
  if(alpha >= 'a' && alpha < 'z'){
    printf("%c", alpha+1);
    
  }
  if(alpha == 'z'){
    printf("a");
  }
  if(alpha >= 'A' && alpha < 'Z'){
    printf("%c", alpha+1);
    
  }
  if(alpha == 'Z'){
    printf("A");
  }
  return 0;
}