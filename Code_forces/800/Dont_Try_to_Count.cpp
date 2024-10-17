#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Solve(string x, string s){
  int count = 0;
  if (x.find(s) != string::npos){
    return 0;
  }
  while (true){
    count++;
    bool flag = false;
    for (int i = 0; i < x.size(); i++){
      x.push_back(x[i]);
      if (x.find(s) != string::npos){
      flag = true;
      break;
    }
    }
    if (x.size() > 2 * s.size()){
      return -1;
    }
    
    
    
    if (flag){
      break;
    }
  }
  
  return count;
}

int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int m, n;
    cin >> m >> n;
    string x, s;
    cin >> x >> s;
    cout << Solve(x, s) << endl;
  }
}