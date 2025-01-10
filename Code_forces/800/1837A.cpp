#include<iostream>
using namespace std;
#include<vector>


int main(){
    int test_case;
    cin >> test_case;
    while (test_case--){
      int x,k;
      cin >> x >> k;

      if (x < k){
        cout << 1<< endl;
        cout << x << endl;
      }
      else if(x % k != 0){
        cout << 1 << endl;
        cout << x << endl;
      }
      else{
        cout << 2 << endl;
        cout << x - k - 1 << " " << k + 1 << endl;
      }
    }
}