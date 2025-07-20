#include <stdio.h>
#include <strings.h>
int main(){
  int tc;
  scanf("%d", &tc);
  for(int k=0; k < tc; k++){
    char s[51], t[51];
    scanf("%s %s", s, t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    int i=0, j=0;
    // condition for when strings are equal
    while(i < len_s && j < len_t){
      printf("%c%c", s[i], t[j]);
      i++;
      j++;
    }
    // when len_s>len_t
    while (i < len_s)
    {
      /* code */
      printf("%c", s[i]);
      i++;
    }
    // when len_t>len_s
    while (j < len_t)
    {
      /* code */
      printf("%c", t[j]);
      j++;
    }
    

    printf("\n");
  }
  return 0;
}