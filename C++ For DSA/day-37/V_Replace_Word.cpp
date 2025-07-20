#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  while (1)
  {
    int index = s.find("EGYPT");
    if (index != -1)
    {
      // s.erase(index, 5);
      // s.insert(index, " ");
      s.replace(index, 5, " ");
    }
    else
    {
      break;
    }
  }
  cout << s << endl;
  return 0;
}