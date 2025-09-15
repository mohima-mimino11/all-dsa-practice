#include <bits/stdc++.h>
using namespace std;

void insertHeap(vector<int> &v, int val)
{
  v.push_back(val);
  int currentIndex = v.size() - 1;
  while (currentIndex != 0)
  {
    int parentIndex = (currentIndex - 1) / 2;
    if (v[parentIndex] > v[currentIndex])
      swap(v[parentIndex], v[currentIndex]);
    else
      break;
    currentIndex = parentIndex;
  }
}

void printHeap(vector<int> v)
{
  for (int x : v)
    cout << x << " ";
  cout << endl;
}

void deleteHeap(vector<int> &v)
{
  cout << v[0] << " Deleted. -> ";
  v[0] = v.back();
  v.pop_back();
  int currentIndex = 0;
  while (true)
  {
    int leftIndex = currentIndex * 2 + 1;
    int rightIndex = currentIndex * 2 + 2;

    int left_val = INT_MAX, right_val = INT_MAX;
    if (leftIndex < v.size())
      left_val = v[leftIndex];
    if (rightIndex < v.size())
      right_val = v[rightIndex];

    if (left_val <= right_val && left_val < v[currentIndex])
    {
      swap(v[leftIndex], v[currentIndex]);
      currentIndex = leftIndex;
    }
    else if (right_val < left_val && right_val < v[currentIndex])
    {
      swap(v[rightIndex], v[currentIndex]);
      currentIndex = rightIndex;
    }
    else
      break;
  }
}

int main()
{
  vector<int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    insertHeap(v, val);
  }

  printHeap(v);
  deleteHeap(v);
  printHeap(v);
  // deleteHeap(v);
  // printHeap(v);
  // deleteHeap(v);
  // printHeap(v);
  // deleteHeap(v);
  // printHeap(v);
  // deleteHeap(v);
  // printHeap(v);
  return 0;
}