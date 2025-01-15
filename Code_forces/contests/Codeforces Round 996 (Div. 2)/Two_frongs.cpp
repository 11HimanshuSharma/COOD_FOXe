#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool Solve(int n,int a, int b){
  int temp = abs(a - b);
  if (temp % 2 == 0){
    return true;
  }
  return false;
}


int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n,a,b;
    cin >> n >> a >> b;
    bool res = Solve(n,a,b);
    if (res){
      cout << "yes" << endl;
    }
    else{
      cout << "no" << endl;
    }
  }
}