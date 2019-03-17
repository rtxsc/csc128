/*
Letter	Marks	Grade Value
A+	90-100	4
A	  80-89	  4
A-	75-79	  3.67
B+	70-74	  3.33
B	  65-69	  3
B-	60-64	  2.67
C+	55-59	  2.33
C	  50-54	  2
C-	47-49	  1.67
D+	44-46	  1.33
D	  40-43	  1
E	  30-39	  0.67
F	  0-29	  0

*/

#include <iostream>
using namespace std;
int main() {
  
  int grade = 85;
  
  if (grade >= 90 && grade <=100) {
    cout << "A+\n";
  }
  else if (grade >= 80 && grade < 90)
  {
    cout << "A\n";
  }
  else if (grade >= 75 && grade < 80)
  {
    cout << "A-\n";
  }
  else {
    cout << "Fail\n";
  }
  
  return 0;

}