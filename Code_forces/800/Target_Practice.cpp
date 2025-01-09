#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
using namespace std;




int main() {
  int test_case;
  cin >> test_case;

  while (test_case--) {
    vector<vector<char>> val(11, vector<char>(11));
    int score = 0;
    for (int i = 1; i <= 10; i++) {
      for (int j = 1; j <= 10; j++) {
      char ch;
      cin >> ch;
      if (ch == 'X'){
      int row = min(i,10 - i + 1);
      int col = min(j,10 - j + 1);
      score += min(row,col);
      }
    }
  }
  cout <<score << endl;
}
}
