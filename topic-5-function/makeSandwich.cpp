#include<iostream>

using namespace std;

string make_sandwich(){

  bool morning;

  cout << "Is it morning now? 1 for yes | 0 for no:";
  cin >> morning;


  string sandwich = "";

  sandwich += "bread\n";
  if(morning == true){
    sandwich += "egg\n";
    sandwich += "mayonaise\n";
  }
  sandwich += "cheese\n";
  sandwich += "beef\n";
  sandwich += "sauce\n";
  sandwich += "bread\n";
  return sandwich;
}

int main(){

  cout << "Your sandwich now:\n" << make_sandwich();
  cout << endl;
  cout << endl;
}
