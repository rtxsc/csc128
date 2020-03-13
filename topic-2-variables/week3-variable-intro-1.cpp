#include<iostream>
using namespace std;

// pre-increment = ++score = buat sekarang +1
// post-increment = score++ = buat kemudian +1

// pre-decrement = --score = buat sekarang -1
// post-decrement = score-- = buat kemudian -1

int main(){
/*
  double score;
  score = 100;
  cout << score << endl;   // 100
  cout << --score << endl; // 99
  cout << score-- << endl; // 99
  cout << score-- << endl; // 98
  cout << score-- << endl; // 97
  cout << score << endl; // 96
*/
  int age;
  string name, address;

  cout << "What is your name?:";
  getline(cin,name);
  cout << "So, your name is " << name << endl << endl;

  cout << "Where do u live?:";
  getline(cin,address);
  cout << "So, live in " << address << endl << endl;

  cout << "How old are you? :";
  cin >> age ;
	cout << "Hello, I am " << age << " years old\n\n\n";

  return 0;
}
