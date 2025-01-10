#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


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
    n = arr.size();
    for (auto it : arr){
      cout << n+1 - it << " ";
    }
    cout << endl;
  }
}
