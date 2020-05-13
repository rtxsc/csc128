// refer to Q7a for the pseudocode
/*
1. Assign a value of 1 to the integer variable count. This variable will be used as a loop counter.
2. Assign a value of 0 to the floating‐point variable sum.
3. Read in the value for the integer variable n.
4. Carry out the following steps repeatedly, as long as count does not exceed n.
c. Read in one of the number in the list. Each number will be represented by the floating
point variable x.
d. Add the value of x to the current value of sum.
e. Increase the value of count by 1.
5. Divide the value of sum by n to obtain the desired average.
6. Write out the calculated value for the average.
*/

#include <iostream>
using namespace std;

int main() {

  int count=1, n;
  float sum=0.0, x,average;

  cout <<"Enter list size n:";
  cin >> n;

  for(count=1;count<=n;count++){
    cout <<"Enter x:";
    cin >> x;
    sum = sum + x;
  }
  average = sum / n;
  cout << "Average:" << average << endl;




}
