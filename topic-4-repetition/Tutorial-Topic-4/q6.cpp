// refer to Q6 to pattern
/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

#include "iostream"
using namespace std;

// for loop method

/*
int main(){

    int i,j;
    for (i = 5; i > 0; i--) {
      for(j = 0; j < i ; j++){
        cout << i-j << " ";
      }
      cout << endl;
    }
}
*/

// while loop method

int main(){

    int i=5,j=0;
    while(i>0){
      while(j<i){
          cout << i-j << " ";
          j++;
      }
      i--;
      j=0;
      cout << endl;
    }
}
