#include<iostream>
using namespace std;
#include<vector>


int Solve(int X,vector<int> fuels){
  int mini_fuels = 0;
  int previous_fuel = 0;
  for (auto fuel : fuels){
    int diff = abs(fuel - previous_fuel);
    previous_fuel = fuel;
    mini_fuels = max(diff,mini_fuels);
  }
  if (mini_fuels == 0){
    return 0;
  }
  int n = fuels.size();
  int final_diff = abs(X - fuels[n-1]) * 2;
  return max(mini_fuels,final_diff); 

}


int main(){
  int test_cases;
  cin >> test_cases;
  while (test_cases--){
    int n, X;
    cin >> n >> X;
    vector<int> fuels;
    for (int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      fuels.push_back(temp);
    }
    cout << Solve(X, fuels) << endl;
  }
}