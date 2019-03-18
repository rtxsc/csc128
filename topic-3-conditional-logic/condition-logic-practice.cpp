// // Q1
// #include <iostream>
// using namespace std;
// int main()
// {
//     double ph = 8; // initialize pH value
//     if (ph > 7)
//     {
//         cout << "Basic\n";
//     }
//     else if (ph < 7)
//     {
//         cout << "Acidic\n";
//     }
//     else
//     {
//         cout << "Neutral\n";
//     }
//     return 0;
// }

// // Q2
// #include <iostream>
// using namespace std;
// int main()
// {
//     double ph = 4; // initialize pH value
//     if (ph > 7)
//     {
//         cout << "Basic\n";
//     }
//     else if (ph < 7)
//     {
//         cout << "Acidic\n";
//     }
//     else
//     {
//         cout << "Neutral\n";
//     }
//     return 0;
// }

// // Q2
// #include <iostream>
// using namespace std;
// int main()
// {
//     double ph = 4; // initialize pH value
//     if (ph > 7)
//     {
//         cout << "Basic\n";
//     }
//     else if (ph < 7)
//     {
//         cout << "Acidic\n";
//     }
//     else
//     {
//         cout << "Neutral\n";
//     }
//     return 0;
// }

// // Q3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int grade = 49; 
//     if (grade >= 50)
//     {
//         cout << "Pass\n";
//     }
//     return 0;
// }

// // Q4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int grade = 50;
//     if (grade >= 50)
//     {
//         cout << "Pass\n";
//     }
//     return 0;
// }

// // Q5 pass or fail
// #include <iostream>
// using namespace std;
// int main()
// {
//     int grade = 49;
//     if (grade >= 50)
//     {
//         cout << "Pass\n";
//     }
//     else
//     {
//         cout << "Fail\n";
//     }
    
//     return 0;
// }

// // Q5 even odd
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 77;
//     if (num % 2 == 0)
//     {
//         cout << "Even\n";
//     }
//     else
//     {
//         cout << "Odd\n";
//     }

//     return 0;
// }

// q8 - input num
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num:";
    cin >> num;
    if (num > 1)
    {
        num = num + 8;
    }
    if (num < 4)
    {
        num = num + 12;
    }
    else
    {
        num = num + 20;
    }
    cout << "num is " << num << endl;
    return 0;
}


