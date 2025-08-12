#include <bits/stdc++.h>
using namespace std;
int main(){
  list<int> l = {10, 20, 30, 40 ,50, 60, 70, 30, 30};
 
  // l.erase(next(l.begin(), 3));
  // l.erase(next(l.begin(), 3), next(l.begin(),6));
  replace(l.begin(), l.end(),30, 200 );
  auto it = find(l.begin(), l.end(), 20);
  if(it == l.end()){
    cout << "Not Found" << endl;
  }else{
    cout << "Found" << endl;
  }
   
  for(int val: l){
    cout << val << " ";
  }
  cout << endl;
  return 0;
}