/*
This is an introduction to datatypes

int : integer - any whole number from negative to positive range
float : floating number - number with decimal of 7 digit precision
double : floating number - number with decimal of 15 digit precision
char : character - any single character on the keyboard
string : words - combination of characters
bool : boolean - truth value either TRUE or FALSE
*/

#include<iostream>
using namespace std;

#define pie 3.142                               // declaring constant using preprocessor directive

int main()
{
    int num1            = 100;
    float num2          = 4.0;
    double num3         = 3.141592653589793;    // value of pi correct to 15 digit precision
    char alpha          = 'y';
    string word         = "any statement here";
    const int one_week  = 7;
    const float pi      = 3.142;                // declaring constant value of pi using keyword
    const long int c    = 299792458;            // declaring constant value of speed of light in m/s using keyword
    bool repeat         = true;

    cout << "num1 is "      << num1 << endl;
    cout << "num2 is "      << num2 << endl;
    cout << "num3 is "      << num3 << endl;
    cout << "alpha is "     << alpha << endl;
    cout << "word is "      << word << endl;
    cout << "one_week is "  << one_week << endl;
    cout << "pi is "        << pi << endl;
    cout << "c is "         << c << endl;
    cout << "repeat is "    << repeat << endl;
    cout << "const pie is " << pie;
    return 0;
}
