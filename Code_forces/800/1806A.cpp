#include<iostream>
using namespace std;



int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int diff = abs(d - b);
    a += diff;
    b += diff;
    int count = 0;
    if ( a < c){
      cout << -1 <<  endl;
    }
    else if (d < b){
      cout << -1 << endl;
    }
    else{
      count += diff;
      count += abs(c - a);
      cout << count << endl;

    }
    
  }
}