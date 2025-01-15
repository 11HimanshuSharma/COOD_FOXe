#include<iostream>
using namespace std;
#include<vector>



int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n ;
    cin >> n;
    int sum = 0;
    bool flag = false;
    while (n--){
      int key;
      cin >> key;
      if (sum == key){
        flag = true;
        break;
      }
    }
    if (flag){
      cout << ""
    }
  }
}