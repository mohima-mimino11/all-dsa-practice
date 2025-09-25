#include <bits/stdc++.h>

using namespace std;


bool cmp(pair<string, int> &l, pair<string, int> &r){
  if (l.first == r.first)
  {
    return l.second > r.second; 
  }
    return l.first < r.first; 
}

int main()
{
  // Write your code here
  int n;
  cin >> n; 
  vector<pair<string, int>> v(n);
  for (int i = 0; i < n; i++)
  {
    string name;
    int nums;
    cin >> name >> nums; 
    v[i] = {name, nums}; 
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < n; i++)
  {
    cout << v[i].first << " " << v[i].second << endl;
  }
  return 0;
}