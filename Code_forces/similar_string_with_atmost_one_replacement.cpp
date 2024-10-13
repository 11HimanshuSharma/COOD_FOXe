#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool Solve(int index1, int index2, bool modified, const string& str1, const string& str2) {
    // Base cases
    if (index1 < 0 && index2 < 0) return true;
    if (index1 < 0 || index2 < 0) return false;

    // If characters match, move to the next pair
    if (str1[index1] == str2[index2]) {
        return Solve(index1 - 1, index2 - 1, modified, str1, str2);
    } else {

      
        if (!modified) {
            return  Solve(index1 - 1, index2 - 1, true, str1, str2) || 
                  Solve(index1 - 1, index2, modified, str1, str2);
        }

        return Solve(index1 - 1, index2, modified, str1, str2);
    }
}

int main() {
    string str1 = "vbcdgdg"; // Example input string 1
    string str2 = "abc";     // Example input string 2
    int n = str1.size();
    int m = str2.size();

 
  
        if (Solve(n - 1, m - 1, false, str1, str2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    

    return 0;
}