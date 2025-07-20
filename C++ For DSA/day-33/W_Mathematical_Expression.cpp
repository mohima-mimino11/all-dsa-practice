#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  long long int c;
  char sign, q;
  cin >> a >> sign >> b >> q >> c;

  if (sign == '+')
  {
    if (a + b == c)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << a + b << endl;
    }
  }
  if (sign == '-')
  {
    if (a - b == c)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << a - b << endl;
    }
  }
  if (sign == '*')
  {
    if (a * b == c)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << a * b << endl;
    }
  }
  return 0;
}