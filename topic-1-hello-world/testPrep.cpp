#include <iostream>
#include <string>
using namespace std;

int validate_int();

int main() {
 
    int num1,num2;
    do{
        cout << "[Test num1] You must enter number only (non-zero):";
        num1 = validate_int(); // function to validate integer input
    }while(!num1);

    cout << "Validated num1:" << num1 << endl;

    do{
        cout << "[Test num2] You must enter number only (non-zero):";
        num2 = validate_int(); // function to validate integer input
    }while(!num2);

    cout << "Validated num2:" << num2 << endl;

    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1%num2 << endl;

    return 0;
}

int validate_int(){
    char buffer[256];
    fgets(buffer,256,stdin);
    return atoi(buffer);
}