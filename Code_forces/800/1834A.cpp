#include<iostream>
using namespace std;
#include<vector>

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
      if (key > 0) countPos++;
      if (key < 0) countNeg++;
    }
    if (countPos >= countNeg){
      if (countNeg % 2 == 0){
        cout << 0 << endl;
      }
      else{
        cout << 1 << endl;
      }
    }
    else{
      int diff = countNeg - countPos;
      // mere pass 2 diff hhai matlab muhhe isse jayda pos chaiye
      // so mai pos me plus and neg me mius
      

      if (diff % 2 == 0){
        countNeg -= diff/2;
        if (countNeg % 2 == 0){
          cout << diff / 2 << endl;
        }
        else{
          cout << (diff / 2 ) + 1 << endl;
        }
      }
      else{
        countNeg -= (diff/2 + 1);
        if (countNeg % 2 == 0){
          cout << (diff/2 + 1) << endl;
        }
        else{
          cout << (diff/2 + 1) + 1 << endl;
        }
      }
    }
  }
}