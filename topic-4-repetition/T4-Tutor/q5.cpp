// refer to Q5 to iterate the number

#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int power, n , input;

  cout << "N"<< "\t" << "4^N" << endl;

  for(n=0 ; n<=3 ; n++){
      cout << n << "\t" << pow(4,n) << endl;
  }
}

// int main() {
//
// int power,n,input;
//
// cout << "Enter any number:";
// cin >> input;
// //using for loop
// for(n=0;n<=input;n++){
//   cout << n << "\t" << pow(4,n) << endl;
// }
//
// // reset n for next execution
// n = 0;
//
// //using while loop
// while (n<=input) {
//   cout << n << "\t" << pow(4,n) << endl;
//   n++;
//
// }
//
//
// }
