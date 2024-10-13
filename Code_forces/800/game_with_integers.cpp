#include<iostream>
using namespace std;



int sumOfDigits(int num){
  int sum = 0;
  while (num ){
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int Solve(int number){
  int Sum_of_digts = sumOfDigits(number);
  if (Sum_of_digts % 3 == 1){
    return 1;
  }
  if ((Sum_of_digts + 1) % 3 == 0){
    return 1;
  }
  return 0;
}
int main(){
  int test_case;
  cin >> test_case;
  while (test_case--){
    int number;
    cin >> number;
    int ans = Solve(number);
    if (ans){
      cout << "First" << endl; 
    }
    else{
      cout << "Second" << endl;
    }
  }

}