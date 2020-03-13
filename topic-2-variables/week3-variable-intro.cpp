#include<iostream>
using namespace std;

int main(){
  /*
  cout << "\n\tThis is arithmetic operation\n";
  int score = 0 ;
  score = 1+9 ;
    cout << score << "\n" ;
  score = 1-9 ;
    cout << score << endl;
  score = 2*9 ;
    cout << score << endl;
  score = 3/9.0 ;
    cout << score << endl;
  score = 940%9 ;
    cout << score << endl;
*/

    int age;
    cout << "Enter your age:";
    cin >> age;
    cout << "\nHello, I am " << age << " years old\n";
    // we just declare tempf without initializing it with any value
      double tempf;
      double tempc;

      // Ask the user to enter desired value
      std::cout << "Enter the temperature in Fahrenheit: ";

      std::cin >> tempf;

      tempc = (tempf - 32) / 1.8;

      std::cout << "The temp is " << tempc << " degrees Celsius.\n";

      return 0;



}
