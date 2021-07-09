#include <iostream>
using namespace std;

void valueFinal(double array[]);
int main()
{
    double someVal[5] = {1.0,2.0,3.0,4.0,5.0};
    valueFinal(someVal);
}

void valueFinal(double arrayRec[]){

    for(int i=0; i<5 ; i++){
        cout << arrayRec[i] << " " ;
    }
}
