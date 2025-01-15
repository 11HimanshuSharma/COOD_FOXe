#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int last_turn = -1;
    // 1 for and 0 for mike
    int score1 = 0; 
    int score2 = 0;
    while (n--) {
        string name;
        cin >> name;
        int score;
        cin >> score;
        if (name == "mike") {
            score2 += score;
            last_turn = 0;
        } else {
            score1 += score;
            last_turn = 1;
        }
    }
    if (score1 == score2) {
        if (last_turn == 0) {
            cout << "andrew" << endl;
        } else if (last_turn == 1) {
            cout << "mike" << endl;
        }
    } else {
        if (score1 > score2) {
            cout << "andrew" << endl;
        } else {
            cout << "mike" << endl;
        }
    }
    return 0;
}