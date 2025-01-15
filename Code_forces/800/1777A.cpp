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
    if (arr.size() == 1){
      cout << 0 << endl;
      continue;
    }
    int count = 0;
    int current_replace_elememt = arr[0];
    for (int i = 1; i < arr.size() ; i++){
      if (current_replace_elememt % 2 == 0){
        if (arr[i] % 2 == 0){
          current_replace_elememt *= arr[i];
          count++;
        
        }
        else{
          current_replace_elememt = arr[i];
        }

      }
      else{
        if (arr[i] % 2 != 0){
          current_replace_elememt *= arr[i];
          count++;
        }
        else{
          current_replace_elememt = arr[i];
        }

      }
    }
    cout << count << endl;
  }
}