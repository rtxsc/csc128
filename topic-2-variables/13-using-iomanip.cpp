// // setw example
// #include <iostream>     // std::cout, std::endl
// #include <iomanip>      // std::setw
// using namespace std;
// int main () {
//     cout << std::setw(10);
//     cout << 10 << std::endl;
//     cout << std::setw(20);
//     cout << 20 << std::endl;
//     cout << std::setw(30);
//     cout << 30 << std::endl;
//   return 0;
// }

///////////////////////////////////////////////////
// setprecision example
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main () {
  double f =3.14159;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  std::cout << std::fixed;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  return 0;
}