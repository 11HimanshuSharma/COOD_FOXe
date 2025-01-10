#include <iostream>
#include <vector>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;

    while (test_case--) {
        int n, k, x;
        cin >> n >> k >> x;

        
        if (k == x) {
            k--;
        }

        vector<int> arr;
        int rem = n;

       
        while (rem > 0 && k > 0) {
            
            
            while (rem >= k && k != x) {
                rem -= k;
                arr.push_back(k);
            }
            k--;
            
            
            if (k == x) {
                k--;
            }
        }

      
        if (rem > 0 || arr.size() == 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
            cout << arr.size() << endl;
            for (auto it : arr) {
                cout << it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
