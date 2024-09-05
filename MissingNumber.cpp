#include <vector>
#include <iostream>
#include <set>

using namespace std; 

int find_missing_number(vector<int> numbers){
  int mini = numbers[0],maxi = numbers[0]; 
  for (int x : numbers) {
    mini = min(mini,x);
    maxi = max(maxi,x);
  }

  set<int> s(numbers.begin(),numbers.end());
  for (int i = mini; i <= maxi; i++) {
    if (s.find(i) == s.end())
      return i; 
  }

  return 0;
}

int main(){
  vector<int> numbers = {1,5,2,3,7,6};
  cout << find_missing_number(numbers);

  return 0;
}
