#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, q;
  cin >> n >> q;
  long long int a[n];
  for (int i = 0; i < n; i++) // N
  {
    cin >> a[i];
  }
  sort(a, a+n); // NlogN
  // Time Compexity- O(NlogN)
  for (int i = 0; i < q; i++) // QlogN
  {
    long long int x;
    cin >> x;
    int flag = 0;
    int l = 0, r = n-1;
    // int flag = 0;
    while(l <= r){ //logN
      int mid = (l + r) / 2;
      if(a[mid] == x){
        flag = 1;
        break;
      }else if(a[mid] > x){
        r = mid - 1;
      }else{
        l = mid + 1;
      }
    }
    if (flag == 1)
    {
      cout << "found" << endl;
    }
    else
    {
      cout << "not found" << endl;
    }
  }

  // O(Q * N)
  // for (int i = 0; i < q; i++)
  // {
  //   long long int x;
  //   cin >> x;
  //   int flag = 0;
  //   for (int i = 0; i < n; i++)
  //   {
  //     if (a[i] == x)
  //     {
  //       flag = 1;
  //     }
  //   }
  //   if (flag == 1)
  //   {
  //     cout << "found" << endl;
  //   }
  //   else
  //   {
  //     cout << "not found" << endl;
  //   }
  // }
  return 0;
}