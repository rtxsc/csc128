
#include<iostream>
#include<string.h> // strcmp(str1,str2)
using namespace std;
string name;
char package;
float duration,additionalHour;
double price, nettPrice, additionalPriceAB =150, additionalPriceC = 200;
double discountRate;
char membership[] = ""; // string membership;
int main(){
    cout << "State ur name: "; getline(cin,name);
    cout << "Choose ur package: "; cin >>package;
    cout << "Enter ur duration of treatment: "; cin >> duration;
    cout << "Are u a member?: [yes] or [no]: ";  cin >> membership;
    if(package!='A' && package!='B' && package!='C')
          cout << "Invalid health screening package\n";
    else
          cout << "Great! enjoy ur package!\n";
/*
     0 = strcmp("yes","yes")  // if str1 == str2
      1 = strcmp("yes","no")  // if str1 != str2
*/
  if(strcmp(membership,"yes")==0){
      cout<< "you are eligible for discount!\n";
      if(package=='A' or package =='B')
          discountRate = 0.05; // only for A & B
      else
          discountRate = 0.1; // only for C
  }
  else{
      cout<< "sorry. you are NOT eligible for discount!\n";
      discountRate = 0;
  }

if(package=='A' or package == 'B'){
// for package A or B
  if(duration>=1){
    // 1 hour and beyond
      if(duration == 1)
          price = 150;
      else{
          if(duration>1){
              // calculate how many additional hours beyond 1 hour
              price = 150; // price for the 1st hour
              additionalHour = duration - 1;
              // price for the consequent hours
              price += (additionalPriceAB*additionalHour); // for
          }
      }
  }
  else{
    // lower than 1 hour
      price = 100;
  }
}
else{
  // for package C
  if(duration>=2){
    // 2 hour and beyond
      if(duration == 2)
          price = 450;
      else{
          if(duration>2){
              // calculate how many additional hours beyond 2 hours
              price = 450; // for the 2st hour
              additionalHour = duration - 2;
               // price for the consequent hours
              price += (additionalPriceC*additionalHour);
          }
      }
  }
  else{
    // lower than 2 hours
      price = 400;
  }
}
nettPrice = price - (price * discountRate);
cout << "Name: " << name << endl;
cout << "Package: " << package << endl;
cout << "Member: " << membership << endl;
cout << "Duration: " << duration << " hour" << endl;
cout << "Total Payment : RM" << nettPrice << endl;

}
