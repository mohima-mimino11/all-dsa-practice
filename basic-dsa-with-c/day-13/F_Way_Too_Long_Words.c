#include <stdio.h>
int main()
{
  int tc;
  scanf("%d", &tc);
  for (int i = 0; i < tc; i++)
  {
    char s[101];
    scanf("%s", &s);
    // for tracking each given string's length
    int count = 0;
    for (int j = 0; s[j] != '\0'; j++)
    {
      count++; // increasing the length value until reaching null character for each given string
    }
    if (count <= 10)
    {
      printf("%s\n", s);
    }
    else
    {
      printf("%c%d%c", s[0], count - 2, s[count - 1]);
      printf("\n");
    }
  }
  return 0;
}