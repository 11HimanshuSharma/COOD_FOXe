#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Solve(vector<vector<char>> &val) {
  int score = 0;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (val[i][j] == 'X') {
        int case1 = abs(4 - i);
        int case2 = abs(4 - j);
        int case3 = abs(5 - i);
        int case4 = abs(5 - j);

        int point = 5 - min(case1,min(case2,min(case3,case4))) + 1;
        score += point;
      }
    }
  }
  return score;
}

int main() {
  int test_case;
  cin >> test_case;

  while (test_case--) {
    vector<vector<char>> val(10, vector<char>(10));
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        cin >> val[i][j];
      }
    }

    int score = Solve(val);
    cout << "Score: " << score << endl;
   
  }

  return 0;
}
