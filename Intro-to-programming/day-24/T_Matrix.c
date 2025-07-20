#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  int primary_sum = 0;
  int secondary_sum = 0;
  if (n == n)
  { // square matrix
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i+j == n - 1)
        {
          // we are inside secondary diagonal
          secondary_sum += a[i][j];
        }
        if (i == j)
        {
          // we are inside primary diagonal
         primary_sum += a[i][j];
        }
      }
    }
    
  }
  int absolute_sum = abs(primary_sum - secondary_sum);
  printf("%d\n", absolute_sum);
  
  

  return 0;
}