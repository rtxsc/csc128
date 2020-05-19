#include<iostream>
using namespace std;

// TYPE2 = no return value + with parameter
void printSomething(int x); // 1st prototype
// TYPE3 = with return type + with parameter
int timesTwo(int x);//2nd prototype
// TYPE4 = with return type + no parameter
int some_func();
// TYPE3 with multiple parameters
int addNumbers(int x,int y,int z);

int main(){
  int answer = addNumbers(1,1,1);
  cout << answer*10 << endl;

  cout << addNumbers(2,2,2) << endl;
  cout << addNumbers(5,4,3) << endl;

  return 0;
}

// function definition for addNumbers
int addNumbers(int x, int y, int z){
  cout << "x: " << x <<" y: " <<y << " z: " << z <<endl;
  int result = x + y + z;
  return result;
}

// declare a new function named printSomething
// function definition
void printSomething(int x){
  cout << "Received " << x/2 << " from main.\n";
  x = x * 2;
  cout << x << endl;
  cout << x + 100 << endl;

}
// type3 function definition
int timesTwo(int x){
  return x*2;
}

// type4 function definition
int some_func(){
  int x = 12345;
  cout << "value in some_func is "<< x << endl;
  return x;
}
