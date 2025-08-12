// #include <stdio.h>
// int main(){
//   int n;
//   scanf("%d", &n);
//   int a[n];
//   int reverse_array[n];
//   for(int i=0; i < n; i++){
//     scanf("%d", &a[i]);
//     reverse_array[i] = a[i];
//   }
//   for(int i=0, j= n-1; i < j; i++, j--){
//     int tmp = reverse_array[i];
//     reverse_array[i] = reverse_array[j];
//     reverse_array[j] = tmp;
//   }
//   int isPalindrome = 1;
//   for(int i=0; i < n; i++){
//     if(a[i] != reverse_array[i]){
//         isPalindrome = 0;
//         break;
//     }

//   }
//   if(isPalindrome){
//     printf("YES\n");
//   }else{
//     printf("NO\n");
//   }

//   return 0;
// }
#include <stdio.h>
int main()
{
  int n, p=1;
  scanf("%d", &n);
  long long int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%lld ", &a[i]);
  }
  for (int i = 0, j = n - 1; i < j; i++, j--)
  {
    if (a[i] != a[j])
    {
      p = 0;
      break;
    }
  }
  if (p == 1)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}