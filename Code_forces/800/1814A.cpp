#include<iostream>
using namespace std;
#include<vector>


int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
     unsigned long long int n ,k;
    cin >> n >> k;
    int rem = n % k;
    if ( n == 1 && k != 1){
      cout << "No" << endl;
      
    }
    
    else if (n % 2 == 0 || n % k == 0 || rem % 2 == 0 || 2 + k == n || n % (2 + k) == 0 || (n-k)%2==0){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}