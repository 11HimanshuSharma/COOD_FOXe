#include<iostream>
#include<vector>
using namespace std;




int main(){
    int test_case;
    cin >> test_case;
    while (test_case--){
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0 ; i < n ; i++){
            cin >> nums[i];
        } 

        bool isSorted = true;
        for (int i = 0 ; i < n-1 ;i++){
            if (nums[i] > nums[i+1]){
                isSorted = false;
                break;
            }
        }
        if (!isSorted && k == 1){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }


    }

}