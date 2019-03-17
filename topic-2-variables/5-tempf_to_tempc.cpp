#include <iostream>

int main() {
  // we initialize tempf with a value
  double tempf = 75.0;
  double tempc;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";

  return 0;
  
}
