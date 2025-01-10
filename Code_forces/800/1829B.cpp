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
    int count = 0;
    int max_count = 0;
    while (n--){
      int key;
      cin >> key;
      if (key == 0){
        count++;
      }
      else{
        
        max_count = max(max_count,count);
        count  = 0;
      }
    }
    cout << max(max_count,count) << endl;
  }
}