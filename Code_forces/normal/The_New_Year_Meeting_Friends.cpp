#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  vector<int> positions = {x1, x2, x3};
  sort(positions.begin(), positions.end());
  int meeting_point = positions[1];
  int total_distance_traveled = (abs(meeting_point - x1) + abs(meeting_point - x2) + abs(meeting_point - x3));
  cout << total_distance_traveled;
}