#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  int specific_row = n - 1;
  for (int i = 0; i < m; i++)
  {
    printf("%d ", a[specific_row][i]);
  }
  printf("\n");
  int specific_col = m - 1;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i][specific_col]);
  }
  printf("\n");
  return 0;
}
