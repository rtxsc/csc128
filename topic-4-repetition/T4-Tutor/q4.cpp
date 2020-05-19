// calculate factorial of number

#include <iostream>
using namespace std;

int main(){

   int factorial=1,i=1,num;

   cout << "Enter any +ve num:";
   cin >> num;

   while(i<=num){
     factorial = factorial * i;
     i++;
   }


 cout << "Factorial is:" << factorial;

}

// int main() {
//
//   int factorial=1,i=1,num;
//
//   cout << "Enter +ve num:";
//   cin >> num;
//
//   //using for loop
//   for(i=1;i<=num;i++){
//     factorial = factorial * i;
//   }
//   cout << "For loop factorial:" <<factorial<<endl;
//
// // reset factorial & i for while loop execution
// factorial=1;
// i = 1;
//
// // using while loop
//   while(i<=num){
//     factorial = factorial * i;
//     i++;
//   }
//   cout << "While loop factorial:" <<factorial<<endl;
//
//
// }
