#include<iostream>
using namespace std;
#include<vector>




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

    vector<int> new_arr;
    new_arr.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++){
      if (arr[i-1] > arr[i]){
        new_arr.push_back(arr[i]);
      }
      new_arr.push_back(arr[i]);
    }
    cout << new_arr.size() << endl;
    for (auto it : new_arr){
      cout << it << " ";
    }
    cout << endl;
  }
}