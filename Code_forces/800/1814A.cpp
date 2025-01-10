#include<iostream>
using namespace std;
#include<vector>


int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n ,k;
    cin >> n >> k;
    int rem = n % k;
    
    if (n % 2 == 0){
      cout << "Yes" << endl;
    }
    if (n % k == 0){
      cout << "Yes" << endl;
    }
    else if (rem % 2 == 0){
      cout << "Yes" << endl;
    }
    
    else{
      cout << "No" << endl;
    }
  }
}