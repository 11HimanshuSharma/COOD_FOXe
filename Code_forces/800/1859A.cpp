#include<iostream>
using namespace std;
#include<vector>


int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int len_arr;
    cin >> len_arr;
    vector<int> b;
    vector<int> c;
    vector<int> arr;
    for (int i = 0; i < len_arr; i++){
      int key;
      cin >> key;
      arr.push_back(key);
    }
    for (int i = 0; i < len_arr; i++){
      if (arr[i] % 2 == 0){
        b.push_back(arr[i]);
      }
      else{
        c.push_back(arr[i]);
      }
    }
    if (b.size() == 0 || c.size() == 0){
      cout << -1 << endl;
    }
    else{
      cout << c.size() << " " << b.size() << endl;
    for (auto it : c){
      cout << it << " ";
    }
    cout << endl;
    for (auto it : b){
      cout << it << " ";
    }
    
    
    cout << endl;

    }
    
  }
}