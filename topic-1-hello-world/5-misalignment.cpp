#include <iostream>
int main(){
int qty;
double price, total;

std::cout << "Enter quantity : \t\t" ; // logic error here
std::cin >> qty;
std::cout << "\n Enter price: RM";
std::cin >> price;
total = qty * price;
std::cout << "The total price is RM " << total;
std::cout << "Thank you"; // logic error here
return 0;
}
