#include <bits/stdc++.h>
using namespace std;

void printListForward(const list<int> &l)
{
  cout << "L -> ";
  for (int val : l)
  {
    cout << val << " ";
  }
  cout << endl;
}


void printListBackward(list<int> l)
{
  cout << "R -> ";
  l.reverse(); 
  for (int val : l)
  {
    cout << val << " ";
  }
  cout << endl;
}

int main()
{
  
  list<int> myList;
  int q;
  cin >> q;
  while (q--)
  {
    int x, v;
    cin >> x >> v;

    if (x == 0)
    {
      
      myList.push_front(v);
    }
    else if (x == 1)
    {
      
      myList.push_back(v);
    }
    else if (x == 2)
    {
      
      int listSize = myList.size();
      if (v >= 0 && v < listSize)
      {
        auto it = next(myList.begin(), v);
        myList.erase(it);
      }
     
    }
    printListForward(myList);
    printListBackward(myList);
  }

  return 0;
}