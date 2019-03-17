// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("testing-fstream.txt");
    myfile << "...berkhemah berkhemah.... \n";
    myfile << "...berkhemah bersama si Nopal... \n";
    myfile << "...si Nopal...si Nopal...anaknya Bahenol \n";
  myfile.close();
  return 0;
}