#include <stdio.h>
#include <string.h>
#include <limits.h>
int main(){
  char s[10000001];
  scanf("%s", &s);
  int len = strlen(s);
  int freq[26] = {0};
  for(int i = 0; i < len; i++){
    int val = s[i] - 97;
    freq[val]++;
  }
  for(int i=0; i < 26; i++){
    if(freq[i] > 0){
      printf("%c : %d\n", i+97, freq[i]);
    }
  }
  return 0;
}