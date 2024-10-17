#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

// ager unique element 2 hai tbahi possible hai
int Solve(vector<int> nums){
  map<int,int> mp;
  for (auto num : nums){
    mp[num]++;
  }
  if (mp.size() == 2){
    vector<int> val;
    for (auto it : mp){
      val.push_back(it.second);
    }
    if (val[0] == val[1]){
      return true;
    }
    else if (abs(val[0] - val[1]) == 1 ){
      return true;
    }
    else{
      return false;
    }
  }
  else if (mp.size() == 1){
    return true;
  }
  return mp.size() == 2 ? true : false;

}

int main(){
  int test_cases;
  cin >> test_cases;
  while (test_cases--){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
      cin >> nums[i];
    }
    cout << (Solve(nums) ? "YES" : "NO") << endl;
  }
}