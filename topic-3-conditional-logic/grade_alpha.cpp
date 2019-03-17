#include <iostream>
using namespace std;
int main() {
  
  int grade = 45;
  
  if (grade >= 80) {
    cout << "A\n";
  }
  else if (grade >= 60)
  {
    cout << "B\n";
  }
  else if (grade >= 40)
  {
    cout << "C\n";
  }
  else if (grade >= 20)
  {
    cout << "D\n";
  }
  else {
    cout << "Fail\n";
  }
  
  return 0;

}