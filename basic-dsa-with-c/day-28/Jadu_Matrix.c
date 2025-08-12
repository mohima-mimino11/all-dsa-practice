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
  int is_Magic = 1;
  if (n == m)
  {

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        // for primary diagonal
        if (i == j)
        {
          if (a[i][j] != 1)
          {
            is_Magic = 0;
          }
        }

        // for secondary diagonal
        else if (i + j == n - 1)
        {
          // we are inside secondary diagonal
          if (a[i][j] != 1)
          {
            is_Magic = 0;
          }
        }
        else
        {
          // we are outside diagonal
          if (a[i][j] != 0)
          {
            is_Magic = 0;
          }
        }
      }
    }
    if (is_Magic == 1)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}
