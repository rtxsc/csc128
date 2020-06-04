// variable scope
// simple code to demonstrate multiplication of two integers
#include<iostream>
using namespace std;

int a=100; // global declaration for 'a'
int b=200; // global declaration for 'b'
// function with return value of int with parameters
int multiply(int a, int b, int c){

  int x = 999; // x here is only local to multiply
  // a , b , c only exist within multiply function
  // a,b,c as local variable inside multiply
  cout << "a from within multiply:" << a << endl;
  cout << x << endl; // try to print out x (eventually gonna fail)
  return a * b * c;
}
void printValueofA(){
  cout << "value of a is:" << a << endl;
}

void printValueofB(){
  cout << "value of b is:" << b << endl;
}

int main(){
// local variables x , y, z
  int x = 3 , y = 5, z;
  int j = 4;

  z  = multiply(x,y,j); // x -> a , y -> b , j -> c
  // z = multiply(3,5,4); // how the function call looks like
  cout <<"\n\n\nResult of multiplication:" << z << endl;
  cout << "a from within main:" << a << endl;
  printValueofA();
  printValueofB();

  return 0;
}
