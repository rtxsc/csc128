#include <iostream>

int main() {
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
