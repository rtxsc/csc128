#include<iostream>
using namespace std;

// function prototypes
double getDiscount(int creditPoint);
void calPayment(double discountRate,double &totalPurchase);

int main(){

  int credit;
  double totalPurchase, rate; // we prepare this variable to be passed-by-reference

  // do{
  //   cout<< "Enter ur collected credit point:"; cin >> credit;
  // }while(credit<0);


  cout << "Enter ur total purchase amount : RM"; cin >> totalPurchase;
  rate = getDiscount(credit); // 1st call

  cout << "Ameba Couture Payment Receipt\n";
  cout << "------------------------------------\n";
  cout << "Total Purchase: RM " << totalPurchase <<endl;
  cout << "Point Earn: " << credit <<endl;
  cout << "Discount: " << rate <<endl;
  calPayment(rate,totalPurchase); // call by passing totalPurchase by reference
  // rate is passed-by-value
  // totalPurchase is actually passed-by-reference
  cout << "Total Purchase after Discount: RM " << totalPurchase <<endl;

  return 0;
}

// function definitions
double getDiscount(int creditPoint){
  // function body
  double discountRate;
  if     (creditPoint >= 250  && creditPoint < 500) discountRate = 0.05;
  else if(creditPoint >= 500  && creditPoint <1000) discountRate = 0.08;
  else if(creditPoint >= 1000 && creditPoint <2500) discountRate = 0.10;
  else if(creditPoint >= 2500 && creditPoint <5000) discountRate = 0.12;
  else if(creditPoint >= 5000 && creditPoint <8000) discountRate = 0.15;
  else if(creditPoint >= 8000)                      discountRate = 0.20;
  else                                              discountRate = 0.00;
  return discountRate; // pass-by-value
}

void calPayment(double discountRate,double &totalPurchase){
  totalPurchase = totalPurchase - (totalPurchase*discountRate); // total= total - discountValue
  // let say totalPurchase = 1000
  // let say creditPoint = 400 = 5% discount
  // discountedValue = 1000 * 0.05 = 50
  // totalPrice = totalPurchase - discountedValue
  // no return statement at the end due to pass by reference method
  // we are passing totalPurchase back to the caller by reference

}
