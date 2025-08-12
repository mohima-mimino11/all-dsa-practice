#include <stdio.h>

long long int summation(long long int a[], int i, long long int n) {
  if(i == n){
    return 0;
  }
  return a[i] + summation(a, i+1, n);
}

int main() {
  long long int n;
  scanf("%lld", &n);
  long long int a[n];
  for (int i = 0; i < n; i++) {
      scanf("%lld", &a[i]);
  }

  printf("%lld\n", summation(a, 0, n));
  return 0;
}
