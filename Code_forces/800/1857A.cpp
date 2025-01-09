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
    int total_sum = 0;
    while (n--){
      int key;
      cin >> key;
      arr.push_back(key);
      total_sum += key;
    }
    int first_sum = 0;
    bool flag = false;
    for (int i = 0; i < arr.size(); i++){
      total_sum -= arr[i];
      first_sum += arr[i];
      if (total_sum % 2 == 0 &&  first_sum % 2 == 0 ){
        flag = true;
        break;
      }
      
    }
    if (flag ){
      cout << "Yes";
    }
    else{
      cout << "No";
    }
    cout << endl;

  }
}