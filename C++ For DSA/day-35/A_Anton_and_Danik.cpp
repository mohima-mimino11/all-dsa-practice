#include <bits/stdc++.h>
using namespace std;
int main(){
  int game_count;
  cin >> game_count;
  string wins;
  cin >> wins;
  int anton_count = 0;
  int danik_count = 0;
  for(auto i = wins.begin(); i < wins.end(); i++){
    if(*i == 'A'){
      anton_count++;
    }
    if(*i == 'D'){
      danik_count++;
    }
  }
  if(anton_count > danik_count){
    cout << "Anton" << endl;
  }
  else if(danik_count > anton_count){
    cout << "Danik" << endl;
  }
  else if(anton_count == danik_count){
    cout << "Friendship" << endl;
  }

  return 0;
}