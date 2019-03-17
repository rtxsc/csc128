#include <iostream>
using namespace std;
int main() {
  double ph = 7; // initialize pH value 
  
  if (ph > 7) {
    
    cout << "Basic\n";
    
  } else if (ph < 7) {
    
    cout << "Acidic\n";
    
  } else {
    
    cout << "Neutral\n";
    
  } 
  
  return 0;
  
}