#include<iostream>
#include<vector>
using namespace std;

vector<int> Solve(int number) {
    vector<int> val;
    int place = 1;
    while (number > 0) {
        int rem = (number % 10) * place;
        if (rem != 0) {
            val.push_back(rem);
        }
        number /= 10;
        place *= 10;
    }
    return val;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;

        vector<int> ans = Solve(num);
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}