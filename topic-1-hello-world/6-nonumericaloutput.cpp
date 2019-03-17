#include <iostream>
int main()
{
    int qty;
    double price;
    std::cout << "Enter quantity of items purchased:" ;
    std::cin >> qty;
    std::cout << "\n Enter the price unit: RM" ;
    std::cin >> price;
    std::cout << "The total price is RM" ; // logic error here
    std::cout << "\n Thank you.";
    return 0;
}
