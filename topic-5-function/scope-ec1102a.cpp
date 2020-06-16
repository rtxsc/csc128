// variable scope
// simple code to demonstrate multiplication of two integers
#include<iostream>
using namespace std;

int multiply(int a,int b);

int main(){
  int x = 3 , y = 5, z;
  z = multiply(x,y); // x->a , y->b
  cout << "z:" << z << endl;

  return 0;
}

int multiply(int a, int b){
  return a * b;
}
