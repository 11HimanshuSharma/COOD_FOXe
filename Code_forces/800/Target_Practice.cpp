#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
using namespace std;

int Solve(vector<vector<char>> &val) {
  int score = 0;

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      if (val[i][j] == 'X') {
        int row = i;
        int col = j;
        if (row > 5){
          row = 10 - row + 1;

        }
        if (col > 5){
          col = 10 - col + 1;
        }
        if (row == col ){
          score += row;
        }
        else{
          score += min(row,col);
        }
    }
    }
  }
  return score;
}

int main() {
  int test_case;
  cin >> test_case;

  while (test_case--) {
    vector<vector<char>> val(11, vector<char>(11));
    for (int i = 1; i <= 10; i++) {
      for (int j = 1; j <= 10; j++) {
        cin >> val[i][j];
      }
    }

    int score = Solve(val);
    cout << "Score: " << score << endl;
   
  }

  return 0;
}
