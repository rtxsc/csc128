/*
Implementation of simple modular programming design in C++, module also known as function
*/
#include <iostream> //to handle output (cout) and input (cin)statements
using namespace std; /*Allow the compiler to use the standard header file defined in ANSI/ISO standard*/
//declare input variable – place a space to store value in a computer memory
int number_1, number_2;
//declare output variable – place a space to store value in a computer memory
int sum, average;
/*
declare module or function prototype - place a space to store value and processed value in a computer memory
*/
void get_Input();
void calculate_Sum();
void calculate_Average();
void display_Output();
int main()
{
get_Input(); //invoke get_Input() function
calculate_Sum(); //invoke calculate_Sum() function
calculate_Average(); //invoke calculate_Average() function
display_Output(); //invoke display_Output () function
return 0;
}
void get_Input()
{
cout <<"Enter first number:" ; //prompt user to enter first number
cin >> number_1; //read value from keyboard and store in number_1
cout <<"Enter second number: " ; //prompt user to enter second number
cin >> number_2; //read value from keyboard and store in number_2
}
void calculate_Sum()
{
//calculate sum – in CPU
sum = number_1 + number_2;
}
void calculate_Average()
{
//calculate average – in CPU
average = sum / 2;
}
void display_Output()
{
//Display output (sum and average) to the screen console (monitor)
 cout << "The sum of " << number_1 << " and " << number_2 << " is " << sum << endl;
    cout << "The average of " << number_1 << " and " << number_2 << " is " << average;
}
