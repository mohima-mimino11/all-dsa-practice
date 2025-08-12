#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v = {1,2, 3,4,5};
  vector<int> v2 = v; //O(1)
  vector<int> v3 = {100, 200, 100, 300, 100, 400, 100};
  // v2.pop_back(); //O(1)
  // v2.pop_back();//O(1)
  v2.insert(v2.begin()+2, v3.begin(), v3.end()); //O(N+K)
  // v2.erase(v2.begin()+1, v2.end()-1);
  replace(v3.begin(), v3.end()-1, 100, 10);
  for(int x:v2){
    cout << x << " ";
  }
  cout << endl;
  for(int x:v3){
    cout << x << " ";
  }
  cout << endl;
  auto it = find(v.begin(), v.end(), 100);
  auto itr = find(v.begin(), v.end(), 3);
  cout << *it << endl;
  cout << *itr << endl;

  if(it == v.end()){
    cout << "Not Found" << endl;
  }
  else{
    cout << "Found" << endl;
  }
  if(itr == v.end()){
    cout << "Not Found" << endl;
  }
  else{
    cout << "Found" << endl;
  }
  // vector element access
  cout << v2[2] << endl;
  cout << v2.back() << endl;
  cout << v2.front() << endl;

  return 0;
}