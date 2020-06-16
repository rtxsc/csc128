#include<iostream>
using namespace std;

double getDiscount(int);
void calPayment(double, double &);

int main(){
  double totalPrice,totalPurchase,rate;
  int credit;
  cout << "Enter total purchase: RM"; cin >> totalPurchase;
  cout << "Enter your credit point: "; cin >> credit;

  rate = getDiscount(credit);
  cout << "Ameba Couture Payment Receipt\n";
  cout << "-----------------------------------\n";
  cout << endl;
  cout << "Total Purchase: RM " << totalPurchase << endl;
  cout << "Point Earn: " << credit << endl;
  cout << "Dicount: " << rate << endl;
  calPayment(rate,totalPurchase);
  cout << "Total price after discount is RM" << totalPurchase << endl;

  return 0;
}

double getDiscount(int creditPoint){
  double discountRate;
  if(creditPoint<=250)        discountRate = 0.05;
  else if(creditPoint<=500)   discountRate = 0.08;
  else if(creditPoint<=1000)  discountRate = 0.10;
  else if(creditPoint<=2500)  discountRate = 0.12;
  else if(creditPoint<=5000)  discountRate = 0.15;
  else                        discountRate = 0.20;
  return discountRate;
}

void calPayment(double discountRate, double &totalPurchase){
  totalPurchase = totalPurchase - (totalPurchase * discountRate);
}
