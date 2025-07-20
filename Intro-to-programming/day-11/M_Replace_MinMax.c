#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int min_val_index = 0;
  int max_val_index = 0;

  for (int i = 1; i < n; i++)
  {
    if (a[i] < a[min_val_index])
    {
      min_val_index = i;
    }
    if (a[i] > a[max_val_index])
    {
      max_val_index = i;
    }
  }
  // printf("%d %d", min_val_index, max_val_index);
  int temp = a[min_val_index];
  a[min_val_index] = a[max_val_index];
  a[max_val_index] = temp;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}