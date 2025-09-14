#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >>n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int val;
  cin >> val;
  v.push_back(val);
  int currentIndex = v.size() - 1;
  while(currentIndex != 0){
    int parentIndex = (currentIndex - 1) / 2;
    if(v[parentIndex]  < v[currentIndex]){
      swap(v[parentIndex], v[currentIndex]);
    }else{
      break;
    }
    currentIndex = parentIndex;
  }
  for(int x:v){
    cout << x << " ";
  }
  cout << endl;
  return 0;
}