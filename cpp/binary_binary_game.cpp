#include<iostream>
#include<cmath>
using namespace std;

int main(){
  cout << "Please enter your number: ";
  int num;
  cin >> num;
  cout << "Please enter your index: ";
  int index;
  cin >> index;

  //converting the number to binary
  string bin = "";
  while (num > 0){
    int rem = num % 2;
    bin = to_string(rem) + bin;
    num = num/2;
  }
  cout << "The binary form is: " << bin << endl;
  bin[index-1] = '1';
  cout << "After changing the binary values: " << bin << endl;
  int number = 0;
  int power = 0;
  int i = bin.length()-1;
  while (i >= 0){
    number += (bin[i] - '0') * (1 << power);
    i--;
    power++;
  }

  cout << "The final ans is: " << number;
  
}
