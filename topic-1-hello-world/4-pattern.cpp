// #include <iostream>
// using namespace std;
// int main()
// {
//   int h=1,v=2,maxVal=5;
//   while(h<=maxVal){
//     cout << h;
//       while(v<=maxVal){
//         cout <<" *"<< v;
//         v++;
//       }
//       cout << endl;
//       h++;
//   } 
// }


#include <iostream>
using namespace std;
int main()
{
  // figure out a suitable value 
  // to be assigned to h, v and maxVal respectively
  // do not change the rest of the logic
  int h,v,maxVal; // assign suitable value only
  while(h<=maxVal){
    cout << h << " ";
    h++;
    if(h>maxVal){
      cout << endl;
      while(v<=maxVal){
        cout << v << endl;
        v++;
      }
    }
  } 
}



/*
#include <iostream>
using namespace std;
int main()
{
  int horizontal=1, vertical=2;
  while(horizontal<=5){
    cout << horizontal << " ";
    horizontal++;
  } 
  cout << endl;
  while(vertical<=5){
    cout << vertical << endl;
    vertical++;
  } 

}

*/