#include <bits/stdc++.h>
using namespace std;
class Cricketer{
  public:
  string country;
  int jersey_no;
  Cricketer(string country, int jersey_no){
    this->country = country;
    this->jersey_no = jersey_no;
  }
};
int main(){
  Cricketer* dhoni = new Cricketer("India", 90);
  Cricketer* kohli = new Cricketer("India", 18);
  *kohli = *dhoni;
  delete dhoni;
  cout << kohli->country << " " << kohli->jersey_no << endl;
  return 0;
}