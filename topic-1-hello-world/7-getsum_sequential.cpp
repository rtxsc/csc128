//Implementation of simple sequential programming design
#include <iostream> //to handle output (cout) and input (cin) statement

using namespace std;

int main() // general function
{
    //declare input variable – place a space to store value in a computer memory
    int number_1, number_2;
    //declare output variable – place a space to store value in a computer memory
    int sum, average;
    cout << "Enter first number: " ; //prompt user to enter first number
    cin >> number_1; //read value from keyboard and store in number_1
    cout << "Enter second number: " ; //prompt user to enter second number
    cin >> number_2; //read value from keyboard and store in number_2
    //calculate sum – in CPU and memory
    sum = number_1 + number_2;
    //calculate average – in CPU and memory
    average = sum / 2;
    //Display output (sum and average) to the screen console (monitor)
    cout << "The sum of " << number_1 << " and " << number_2 << " is " << sum << endl;
    cout << "The average of " << number_1 << " and " << number_2 << " is " << average;
    return 0;
} //end of main()
