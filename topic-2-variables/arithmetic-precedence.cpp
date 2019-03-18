#include<iostream>
using namespace std;

int main(){
int x;

 x = 1 + 2 * 3 / 2;
 cout << x << endl; // 4

 x = (1 + 2) * 3 / 2 ;
 cout << x << endl; // 4 

 x = (1 + 2) * 3 % 2;
 cout << x << endl; // 1

 x = (4 + 4) / 5 + 3 % 2;
 cout << x << endl; // 2

 x = 4 + 4 / (5 + 3) % 2;
 cout << x << endl; // 4

 x = (1 + 2) / (3 + 4) % 5 * 6 - 3;
 cout << x << endl; // -3

 x = (3 * 9 * (3 + (9 * 3) / 3 * 3));
 cout << x << endl; // 810

 x = 2 % 2 + 2 * 2 - 2 / 2;
 cout << x << endl; // 3
}