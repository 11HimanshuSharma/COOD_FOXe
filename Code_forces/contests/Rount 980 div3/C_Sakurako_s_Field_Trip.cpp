#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n;
    cin >> n;
    vector<int> val;
    for (int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      val.push_back(temp);
    }
    int disturbance = 0;
    for (int i = 1; i < val.size();i++){
      if (val[i-1] == val[i]){
        disturbance++;
  
      }
    }
    int count = 0;
    for (int i = 0; i< n - 1 - (1 + i);i++){
      int disturbed_pair = 0;
      if (val[i] == val[i+1]){
        disturbed_pair++;
      }
      if (val[n-i-1] == val[n-i-2]){
        disturbed_pair++;
      }
      if (val[i+1] == val[n-i-1]){
        disturbed_pair--;
      }
      if (val[i] == val[n-i-2]){
        disturbed_pair--;
      }
      count += max(disturbed_pair,0);

    }

   
    cout << disturbance - count << endl;


  }
}