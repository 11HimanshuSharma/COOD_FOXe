#include<iostream>
using namespace std;
#include<vector>



int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n;
    cin >>n;
    vector<int> arr;
    long long int total_prod = 1;
    for (int i = 0; i < n ; i++){
      int key;
      cin >> key;
      arr.push_back(key);
      total_prod *= key;
    }
    int ans = -1;
    long long int current_prod = 1;
    for (int i = 0; i <n ; i++){
      current_prod *= arr[i];
      total_prod /= arr[i];
      if (current_prod == total_prod){
        ans = i + 1;
        break;
      }
    }
    cout << ans << endl;

  }
}