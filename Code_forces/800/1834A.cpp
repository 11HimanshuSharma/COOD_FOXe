#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>



int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n;
    cin >> n;
    int countNeg = 0,countPos = 0; 
    while (n--){
      int key;
      cin >> key;
      if (key > 0){
        countPos++;
      }
      else{
        countNeg++;
      }
    }
    if (countPos > countNeg){
        cout << 0 << endl;
      }
      else if (countPos == 0){
        cout << countNeg << endl;
        }
        else if (countNeg > countPos){
        int diff = countNeg - countPos;
        if (diff % 2 == 0){
          cout << 
        }
      }
      else{
        cout << 0 << endl;
      }
  }
}