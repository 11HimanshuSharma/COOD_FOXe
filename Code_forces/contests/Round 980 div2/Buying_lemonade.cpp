#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX_LIMIT = 200001;
vector<long long> numbers(MAX_LIMIT);

int main() {
  int test_case;
  cin >> test_case;
  while (test_case--){
    long long n, k;
    cin >> n >> k;


    for (int index = 1; index <= n; ++index) {
        numbers[index] = 0;
    }

    
    for (int index = 1; index <= n; ++index) {
        cin >> numbers[index];
    }

    long long total = 0;
    

    sort(numbers.begin(), numbers.begin() + n);

    for (int index = 1; index <= n; ++index) {
        if (numbers[index] * (n - index + 1) >= k) {
            total += k;
            break;
        } else {
            total += numbers[index] + 1;
            k -= numbers[index];
        }
    }


    cout << total << endl;

  }
    

    return 0;
}
