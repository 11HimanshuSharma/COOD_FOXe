#include<iostream>
using namespace std;

string Solve(string str){
  for (int i = 0; i < str.length(); i++){
    if (str[i] >= '5' && str[i] <= '9' ){
      if (i == 0 && (str[i] == '1' || str[i] == '9')){
        continue;
      }
      str[i] = '9' - str[i] + '0';
    }
  }
  return str;
}

int main(){
  string str;
  cin >> str;
  cout << Solve(str);
 
 

  return 0;
}