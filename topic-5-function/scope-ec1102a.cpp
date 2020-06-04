// variable scope
// simple code to demonstrate multiplication of two integers
#include<iostream>
using namespace std;

int a; // global

int multiply(int a, int b){
  cout << "a from multiply:" << a << endl;
  // a = 3, b = 5
  // return 3 * 5
  return a * b;
}

int main(){
  int x = 3 , y = 5, z;
  z = multiply(x,y); // x->a , y->b
  cout << "z:" << z << endl;
  cout << "a from main:" << a << endl;
  return 0;
}
