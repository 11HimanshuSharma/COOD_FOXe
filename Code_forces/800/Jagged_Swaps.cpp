#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Solve(vector<int>& nums) {
  bool is_sort = is_sorted(nums.begin(),nums.end());
  if (is_sort){
    return true;
  }
  
  while (true){
    bool flag = false;
    for (int i = 1; i < nums.size()-1;i++){
      if (nums[i] > nums[i-1] && nums[i] > nums[i+1]){
        flag = true;
        swap(nums[i],nums[i+1]);
      }
    }
    if (!flag){
      break;
    }
  }
  for (int i = 1; i < nums.size(); i++){
    if (nums[i] < nums[i-1]){
      return false;
    }
  }
  return true;
}

int main() {
  int test_case;
  cin >> test_case;
  while (test_case--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    cout << (Solve(nums) ? "YES" : "NO") << endl;
  }
}
