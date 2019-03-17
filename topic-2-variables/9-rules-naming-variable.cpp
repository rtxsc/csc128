// rules of naming variable
#include<iostream>
using namespace std;
int main()
{
    /* --------------------------------------------------------------------
    The 1st letter must be alphabet or underscore.
    */

    int num0 , num2, num3;
    int _1num, _2num, _3num; // delete any underscore to get an error

    /* --------------------------------------------------------------------
    Can be a combination of alphabet letter, digit and underscore.
    */
    int lowest_score,highest_score,score;
    int lowestScore,highestScore,scoreInput;
    int _1stScore,_2ndScore, _averageScore;
    // int n@m, $rm, total%;  // uncomment to get an error

    /* --------------------------------------------------------------------
    Cannot used C++ reserved word, for example:
    int char long float double default case for void break const else
    if private do else goto switch while public class
    */

    /* --------------------------------------------------------------------
    No blanks or white space characters.
    */

   // int num 1 , num 2 , num 3 ; // uncomment to get an error

    /* --------------------------------------------------------------------
    Case sensitive (the lowercase and uppercase letters are treated as different characters).
    */

   int num1,NUM1,Num1,nuM1,nUm1,NUm1,nUM1,NuM1;

    return 0;
}









