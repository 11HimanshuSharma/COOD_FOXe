#include<iostream>
using namespace std;






int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int coins,minProf;
    cin >> coins >> minProf;
    if (coins >= minProf){
      cout << coins << endl;
    }
    else{
      if (coins * 2 < minProf){
        cout << 0 << endl;
      }
      else{
        int diff = abs(coins - minProf);
        cout << coins - diff << endl;
      }
    }
  }
}