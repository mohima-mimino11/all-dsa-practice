#include <iostream>
using namespace std;
int main(){
  int day;
  cin >> day;
  // break necessary after each case or else once a true value is reached all other cases becomes true after that and does the operation of the cases afterwards
  switch(day){
    case 1:
      cout << "Saturday\n";
      break;
    case 2:
      cout << "Sunday\n";
      break;
    case 3:
      cout << "Monday\n";
      break;
    case 4:
      cout << "Tuesday\n";
      break;
    case 5:
      cout << "Wednesday\n";
      break;
    case 6:
      cout << "Thursday\n";
      break;
    case 7:
      cout << "Friday\n";
      break;
    default:
      cout << "Wrong Input\n";
    
  }
  return 0;
}