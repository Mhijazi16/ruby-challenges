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

int validate_input(){
  int x; 
  while (!(cin >> x)) {
    cout << endl << "Invalid Input !!";
    cin.clear(); 
    cin.ignore();
    cout << endl << "Enter Number: ";
  }

  return x; 
}

vector<int> take_intpu(){
  int size = 0;
  cout << "Enter how many elements you want: "; 
  cin >> size; 

  vector<int> array; 
  while (size--) {
    cout << "Enter Number: "; 
    int x = validate_input(); 
    array.push_back(x);
  }

  return array;
}

int main(){
  vector<int> numbers = take_intpu();
  cout << find_missing_number(numbers);

  return 0;
}
