#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>


int main(){
  int n ;
  cin >> n;
  int ans = INT_MAX;
  while (n--){
    int key;
    cin >> key;
    ans = min(ans,abs(key));
  }
  cout << ans;

}