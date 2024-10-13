#include<iostream>
using namespace std;
#include<vector>

int main(){
  int test_cases;
  cin >> test_cases;
  while (test_cases--){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n ; i++){
      cin >> nums[i];
    }
    bool isFound = false;
    for (int i = 0 ; i < n; i++){
      if (nums[i] == k){
        isFound = true;
        break;
      }
    }
    if (!isFound){
      cout << "No" << endl;
    }
    else{
      cout << "Yes" << endl;
    }
  }
}