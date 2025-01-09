#include<iostream>
using namespace std;

bool canUnlock(int x) {

    
        if (x % 33 == 0) {
            return true;
        }
   
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (canUnlock(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
