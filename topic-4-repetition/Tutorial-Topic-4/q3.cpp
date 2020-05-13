#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int num[3],sum=0,i=0;
// using while loop
  cout << "enter value a b c consecutively:";
  while(i<3){
    cin >> num[i];
    sum = pow(num[i],3) + sum;
    i++;
  }
  cout << "Sum using while loop:" <<sum<< endl;

// reset sum and i to execute for loop
  sum = 0;
  cout << "re-enter value a b c consecutively:";
  for(i=0;i<3;i++){
      cin >> num[i];
      sum = pow(num[i],3) + sum;
  }
  cout << "Sum using for loop:" <<sum<< endl;

}
