#include<iostream>
using namespace std;
#include<vector>
#include<climits>




int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n;
    cin >> n;
    vector<int> arr;
    while (n--){
      int key;
      cin >> key;
      arr.push_back(key);
    }
    int min_diff = INT_MAX;
    bool flag = false;
    for (int i =1; i < arr.size();i++){
      if (arr[i-1] > arr[i]){
        flag = true;
        break;
      }
      if (arr[i-1] <= arr[i]){
        min_diff = min(min_diff,abs(arr[i-1] - arr[i]));
      }
    }
    if (flag){
      cout << 0 ;
    }
    else{
      cout << (min_diff/2) + 1;
    }
    cout << endl;
  }
}