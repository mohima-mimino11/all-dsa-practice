#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int tc;
  scanf("%d", &tc);
  for (int t = 0; t < tc; t++)
  {
    char s[10001];
    scanf("%s", s);
    int freqSmall[26] = {0};
    int freqCapital[26] = {0};
    int freqDigit[10] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
      if (s[i] >= 'a' && s[i] <= 'z')
      {
        int val = s[i] - 'a';
        freqSmall[val]++;
      }
      else if (s[i] >= 'A' && s[i] <= 'Z')
      {
        int val = s[i] - 'A';
        freqCapital[val]++;
      }
      else if (s[i] >= '0' && s[i] <= '9')
      {
        int val = s[i] - '0';
        freqDigit[val]++;
      }
    }
    int totalSmall = 0, totalCapital = 0, totalDigit = 0;
    for (int i = 0; i < 26; i++)
    {
      totalSmall += freqSmall[i];
      totalCapital += freqCapital[i];
    }
    for (int i = 0; i < 10; i++)
    {
      totalDigit += freqDigit[i];
    }
    printf("%d %d %d\n", totalCapital, totalSmall, totalDigit);
  }
  return 0;
}
