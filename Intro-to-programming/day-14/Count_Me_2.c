#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[100000+1];
    scanf("%s", s);
    int len = strlen(s);
    int count = 0;
    for(int i = 0; i < len; i++){
      if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
        count++;
      }
    }
    printf("%d\n", count);
    return 0;
}
