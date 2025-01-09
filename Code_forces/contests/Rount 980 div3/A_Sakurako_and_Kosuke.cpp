#include<iostream>
using namespace std;



int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int key;
    cin >> key;

    if (abs(key) % 2 == 0){
      cout << "Sakurako" << endl;
    }
    else{
      cout << "Kosuke" << endl;
    }
  }
}