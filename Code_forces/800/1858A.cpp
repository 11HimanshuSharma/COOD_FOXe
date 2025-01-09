#include<iostream>
using namespace std;
#include<vector>


int main(){
  int test_case;
  cin >> test_case;
  while (test_case-- ){
    int a,b,c;
    cin >> a >> b >> c;

    if (c % 2 != 0){
      // first turn kat
      if (a==b){
        cout << "First";
      }
      if (a > b){
        cout << "First";
      }
      else if (a < b){
        cout << "Second";
      }
    }
    else{
      // first anna
      if (a==b){
        cout << "Second";
      }
      if (a > b){
        cout << "First";
      }
      else if (a < b){
        cout << "Second";
      }
    }
    cout << endl;

  }
}