#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  char s[1000001];
  scanf("%s", s);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += s[i] - '0';
  }
  printf("%d\n", sum);
  return 0;
}
