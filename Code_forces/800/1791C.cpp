#include<iostream>
using namespace std;
using namespace std;

int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = 0;
    int right = n-1;
    int count = 0;

    while (left <= right){
      if ((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0')){
        left++;
        right--;
        // cout << left << "->" << right << endl;
      }
      else{
        break;
      }
    }
    cout << right  - left + 1 << endl;
  }
}