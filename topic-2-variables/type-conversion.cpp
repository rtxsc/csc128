/*
Type conversion from int to float and vice versa
*/

#include<iostream>
using namespace std;
int main()
{
    int num1            = 100;
    float num2          = 4.230;
    double num3         = 3.141592653589793;    // value of pi correct to 15 digit precision
    
    num1 = float(num1);
    num2 = int(num2);
    num3 = int(num3);

    cout << "num1 is "      << num1 << endl;
    cout << "num2 is "      << num2 << endl;
    cout << "num3 is "      << num3 << endl;
    
    return 0;
}
