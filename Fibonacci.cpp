#include <vector>
#include <iostream>

using namespace std; 

int get_next_number(vector<int> seq){
  int last = seq.back(); 
  int second_last = *(seq.end()-2);
  return last + second_last; 
}

int main(){ 
  vector<int> sequence = {0,1,1,2,3,5,8};
  cout << get_next_number(sequence) << endl;
  return 0; 
}
