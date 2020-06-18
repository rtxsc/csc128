#include <iostream>
using namespace std;

void Bubble(double x, double &y, int i, int &j);

int main() {

  double x1= 32.0;
  double y1= 21.0;
  int z1 = 10;
  int j = 20;
  Bubble(x1,y1,z1,j);
  cout << x1 << " " << y1 << " " << z1 << " " << j ;

  x1 = 1.5;
  y1 = 2.3;
  z1 = 8;
  j = 9;

   Bubble(y1,x1,j,z1); // change the argument position
   cout << endl;
   cout << x1 << " " << y1 << " " << " " << z1 << " " << j;

}

void Bubble(double x, double& y, int i,int& j){

  x = y;
  y = x;
  i = 2 * i;
  j = 2 * j;
}

/*

/////////// for discussion ///////////////

#include <iostream>
using namespace std;

// this function will not return anything using "return" term
// this is a pass-by-reference function = y & j as reference while x & i as value
void Bubble(double x, double &y, int i, int &j);

int main() {

  double x1= 32.0;
  double y1= 21.0;
  int z1 = 10;
  int j = 20;
  Bubble(x1,y1,z1,j); // Bubble(32.0,21.0,10,20) - 1st call
  cout << x1 << " " << y1 << " " << z1 < " " << j ;
  // 32(same as during call) " " &21(changed) " " 10(same as during call)  " " &40(changed)

  x1 = 1.5;
  y1 = 2.3;
  z1 = 8;
  j = 9;

// Bubble(2.3 , 1.5 , 9 , 8) - 2nd call
   Bubble(y1,x1,j,z1); // change the argument position
   cout << endl;
  cout << x1 << " " << y1 << " " << " " << z1 << " " << j;
  // 1.5(changed) " " 2.3(same as during call) " " 16(changed) " " 9(same as during call)
}

//void Bubble(32.0, 21.0, 10,20) - 1st call
//void Bubble(2.3 , 1.5 , 9 , 8) - 2nd call
void Bubble(double x, double& y, int i,int& j){

  // x = y;  // x = 21
  // y = x;  // y = 21 (reference varible &y)
  // i = 2 * i; // i = 2 * 10  = 20;
  // j = 2 * j; // j = 2 * 20 =  40 (reference variable &j)

  x = y;  // x = 1.5
  y = x;  // y = 1.5 (reference variable &y)
  i = 2 * i; // i = 2 * i = 2 *  9 = 18
  j = 2 * j; // j = 2 * j = 2 *  8 = 16 (reference variable &j)
}

*/
