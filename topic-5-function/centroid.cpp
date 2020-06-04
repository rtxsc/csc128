#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
// #include <windows.h>
using namespace std;

void intro_animation();
int beam_selection(char);
void calc_solid_centroid(int,int);
void calc_hollow_centroid(int,int);
void calc_i_beam_centroid(int,int,int,int,int,int);
void calc_t_beam_centroid(int,int,int,int);
double check_input(char[],char);
double check_input_pro(char[], char);
void redraw_shape_with_centroid(int);
char change_shape();
void choose_beam_type();
void restart_prompt();

char typeofbeam, restart;
char l_char[]="",h_char[]="";
char l1_char[]="",l2_char[]="",l3_char[]="";
char h1_char[]="",h2_char[]="",h3_char[]="";
double totalarea,centreX, centreY, height, length, centroidX, centroidY,A1, A2,A3;
double H1, H2, H3, L1, L2, L3, centreX1, centreX2, centreX3, centreY1, centreY2, centreY3;
int i = 0;
int j = 0;
int delay = 20;
int countWrongInput = 0;
int draw_centroid_code ;
int num_of_stars = 70;
char side ;
char change_beam;
char selected_beam[12];

int main (){
    intro_animation();                               // process 1:display intro animation
    choose_beam_type();                              // process 2:ask user to choose beam type
    draw_centroid_code = beam_selection(typeofbeam); // process 3:calculate centroid
    redraw_shape_with_centroid(draw_centroid_code);  // process 4:draw shape with centroid
    restart_prompt();                                // process 5:ask user if they want to repeat process
    return 0;
}

void intro_animation(){

    cout << "This software will help you calculate the centroid of beam.\n";
    while(i < num_of_stars){
        cout << "*" ;
        i++;
    }
    cout << "\nChoose your beam type by entering the appropriate letter.\n";
    cout << "\n\n [S]= Solid Beam [H]= Hollow Beam [I]= I-shaped beam [T]= T-shaped beam\n\n";


    cout <<"          solid           hollow            I-beam           T-beam         "<<endl;
    cout <<"     +-------------+  +-------------+  +-------------+  +-------------+     "<<endl;
    cout <<"     |             |  |             |  |      x      |  |      x      |     "<<endl;
    cout <<"     |             |  |   +-----+   |  +----+   +----+  +----+   +----+     "<<endl;
    cout <<"     |             |  |   |     |   |       |   |            |   |          "<<endl;
    cout <<"     |      x      |  |   |  x  |   |       | x |            | x |          "<<endl;
    cout <<"     |             |  |   |     |   |       |   |            |   |          "<<endl;
    cout <<"     |             |  |   +-----+   |  +-----   -----+       |   |          "<<endl;
    cout <<"     |             |  |             |  |      x      |       |   |          "<<endl;
    cout <<"     +-------------+  +-------------+  +-------------+       +---+          "<<endl;
    cout <<endl;

    while(j < num_of_stars){
        cout << "*" ;
        j++;
    }
    i = 0; j = 0; // reset both variables so that animation can be repeated once program restarted
}

int beam_selection(char typeofbeam){

    switch(typeofbeam){
        case 's':
        case 'S':
        cout << "Your beam is Solid beam!\n";

        cout <<"     <------l------>      "<<endl;
        cout <<"     +-------------+  ^ "<<endl;
        cout <<"     |             |  | "<<endl;
        cout <<"     |             |  | "<<endl;
        cout <<"     |             |  | "<<endl;
        cout <<"     |      x      |  h "<<endl;
        cout <<"     |             |  | "<<endl;
        cout <<"     |             |  | "<<endl;
        cout <<"     |             |  | "<<endl;
        cout <<"     +-------------+  v "<<endl;
        cout <<endl;

        cout << "Enter the length (l) of your beam:";
        cin >> l_char;
        side = 'l';
        // METHOD 1(noob) - checking for input error: user entering alphabet instead of number
        // cout << "length entered isDigit?:" << isdigit(l_char[0]) << endl;
        while(!isdigit(l_char[0])){
          cout << "CORRECTLY INPUT the LENGTH (l) of your beam:";
          cin >> l_char;
        }
        length = atoi(l_char);

        cout << endl;
        cout << "Enter the height (h) of your beam:";
        cin >> h_char;
        side = 'h';
        // METHOD 1(noob) - checking for input error: user entering alphabet instead of number
        // cout << "height entered isDigit?:" << isdigit(h_char[0]) << endl;
        while (!isdigit(h_char[0]))
        {
          cout << "CORRECTLY INPUT the HEIGHT (h) of your beam:";
          cin >> h_char;
        }
        height = atoi(h_char);

        cout << endl;
        calc_solid_centroid(length, height);
        draw_centroid_code = 1; // 1 : will draw solid block
        break;

        case 'h':
        case 'H':
        cout << "Your beam is Hollow beam!\n";

        cout <<"    <------l------>    "<<endl;
        cout <<"    +-------------+  ^ "<<endl;
        cout <<"    |             |  | "<<endl;
        cout <<"    |   +-----+   |  | "<<endl;
        cout <<"    |   |     |   |  | "<<endl;
        cout <<"    |   |  x  |   |  h "<<endl;
        cout <<"    |   |     |   |  | "<<endl;
        cout <<"    |   +-----+   |  | "<<endl;
        cout <<"    |             |  | "<<endl;
        cout <<"    +-------------+  v "<<endl;
        cout <<endl;


        cout << "Enter the length (l) of your beam:";cin >> l_char;
        side = 'l';
        // METHOD 2(pro) - checking for input error: user entering alphabet instead of number
        length = check_input_pro(l_char,side);
        cout << endl;
        cout << "Enter the height (h) of your beam:";cin >> h_char;
        side = 'h';
        height = check_input_pro(h_char,side);
        cout << endl;
        calc_hollow_centroid(length,height);
        draw_centroid_code = 2; // 2 : will draw hollow block
        break;

        case 'i':
        case 'I':
        cout << "Your beam is I shaped beam!\n";
        cout <<"         I-beam      "<<endl;
        cout <<"    +-------------+  "<<endl;
        cout <<"    |      x      |  "<<endl;
        cout <<"    +----+   +----+  "<<endl;
        cout <<"         |   |       "<<endl;
        cout <<"         | x |       "<<endl;
        cout <<"         |   |       "<<endl;
        cout <<"    +----+   +----+  "<<endl;
        cout <<"    |      x      |  "<<endl;
        cout <<"    +-------------+  "<<endl;
        cout <<endl;


        cout << "Divide your I shaped beam into 3 section horizontally and label it as section1,section2 and section3.\n\n\n";

        cout << "Enter the length of section1[L1] at your beam:";cin >> l1_char;
        side = 'a';
        L1 = check_input_pro(l1_char, side);
        cout << endl;
        cout << "Enter the length of section2[L2] at your beam:";
        cin >> l2_char;
        side = 'b';
        L2 = check_input_pro(l2_char, side);
        cout << endl;
        cout << "Enter the length of section3[L3] at your beam:";
        cin >> l3_char;
        side = 'c';
        L3 = check_input_pro(l3_char, side);
        cout << endl;
        cout << "Enter the height of section1[H1] at your beam:";
        cin >> h1_char;
        side = 'x';
        H1 = check_input_pro(h1_char, side);
        cout << endl;
        cout << "Enter the height of section2[H2] at your beam:";
        cin >> h2_char;
        side = 'y';
        H2 = check_input_pro(h2_char, side);
        cout << endl;
        cout << "Enter the height of section3[H3] at your beam:";
        cin >> h3_char;
        side = 'z';
        H3 = check_input_pro(h3_char, side);
        cout << endl;
        calc_i_beam_centroid(L1,L2,L3,H1,H2,H3);
        draw_centroid_code = 3; // 3 : will draw I block

        break;

        case 't':
        case 'T':
        cout << "Your beam is T shaped beam!\n";
        cout <<"         T-beam        "<<endl;
        cout <<"   +-------------+     "<<endl;
        cout <<"   |      x      |     "<<endl;
        cout <<"   +----+   +----+     "<<endl;
        cout <<"        |   |          "<<endl;
        cout <<"        | x |          "<<endl;
        cout <<"        |   |          "<<endl;
        cout <<"        |   |          "<<endl;
        cout <<"        |   |          "<<endl;
        cout <<"        +---+          "<<endl;
        cout <<endl;

        cout << "Divide your Ishaped beam into 2 section horizintally and label it as section1 and section2.\n";

        cout << "Enter the length of section1[L1] at your beam:";
        cin >> l1_char;
        side = 'a';
        L1 = check_input_pro(l1_char, side);
        cout << endl;
        cout << "Enter the length of section2[L2] at your beam:";
        cin >> l2_char;
        side = 'b';
        L2 = check_input_pro(l2_char, side);
        cout << endl;
        cout << "Enter the height of section1[H1] at your beam:";
        cin >> h1_char;
        side = 'x';
        H1 = check_input_pro(h1_char, side);
        cout << endl;
        cout << "Enter the height of section2[H2] at your beam:";
        cin >> h2_char;
        side = 'y';
        H2 = check_input_pro(h2_char, side);
        cout << endl;
        calc_t_beam_centroid(L1,L2,H1,H2);
        draw_centroid_code = 4; // 4 : will draw T block
        break;

        default:   cout <<"Your selection is CLEARLY invalid!\n";
    }
return draw_centroid_code;
}

void calc_solid_centroid(int length,int height){
    centroidX = length / 2.0;
    centroidY = height / 2.0;
    cout << "Your Solid beam centroid is (x,y): ("<<centroidX<<","<<centroidY<<")"<<endl;

}

void calc_hollow_centroid(int length,int height){
    centroidX = length / 2.0;
    centroidY = height / 2.0;
    cout << "Your Hollow beam centroid is (x,y): ("<<centroidX<<","<<centroidY<<")"<<endl;
}

void calc_i_beam_centroid(int L1,int L2,int L3,int H1,int H2,int H3){

  centreX1 = centreX2 = centreX3 = L1/2;
  centreY1 = (H1/2) + H2 + H3;
  centreY2 = (H2/2) + H3;
  centreY3 = H3/2;
  A1 = L1 * H1;
  A2 = L2 * H2;
  A3 = L3 * H3;
  totalarea = A1 + A2 + A3;
  centroidX = ((A1 * centreX1)+(A2 * centreX2)+(A3 * centreX3))/totalarea;
  centroidY = ((A1 * centreY1)+(A2 * centreY2)+(A3 * centreY3))/totalarea;
  cout << "Your centroid of beam is: ("<<centroidX<<","<<centroidY<<")"<<endl;
}

void calc_t_beam_centroid(int L1,int L2,int H1,int H2){
  centreX1 = centreX2  = L1/2;
  centreY1 = (H1/2) + H2 ;
  centreY2 = H2/2;

  A1 = L1 * H1;
  A2 = L2 * H2;

  totalarea = A1 + A2 ;
  centroidX = ((A1 * centreX1)+(A2 * centreX2))/totalarea;
  centroidY = ((A1 * centreY1)+(A2 * centreY2))/totalarea;
  cout << "Your centroid of beam is: ("<<centroidX<<","<<centroidY<<")"<<endl;
}

void redraw_shape_with_centroid(int code){

if (code == 1){
  cout <<"\nHere is your Solid beam centroid illustration!\n";
  cout <<"          solid       "<<endl;
  cout <<"     +-------------+  "<<endl;
  cout <<"     |             |  "<<endl;
  cout <<"     |             |  "<<endl;
  cout <<"     |             |  "<<endl;
  cout <<"     |"<<setw(6)<<centroidX <<","<< centroidY<<setw(6)<<"|"<< endl;
  cout <<"     |             |  "<<endl;
  cout <<"     |             |  "<<endl;
  cout <<"     |             |  "<<endl;
  cout <<"     +-------------+  "<<endl;
  cout <<endl;

}
if (code == 2){
  cout <<"\nHere is your Hollow beam centroid illustration!\n";
  cout <<"          hollow     "<<endl;
  cout <<"    +-------------+  "<<endl;
  cout <<"    |             |  "<<endl;
  cout <<"    |   +-----+   |  "<<endl;
  cout <<"    |   |     |   |  "<<endl;
  cout <<"    |   |"<<setw(2)<<centroidX <<","<<centroidY<<setw(6)<<"|   |"<<endl;
  cout <<"    |   |     |   |  "<<endl;
  cout <<"    |   +-----+   |  "<<endl;
  cout <<"    |             |  "<<endl;
  cout <<"    +-------------+  "<<endl;
  cout <<endl;

}
if (code ==3){
  cout <<"\nHere is your I-beam centroid illustration!\n";
  cout <<"         I-beam      "<<endl;
  cout <<"    +-------------+  "<<endl;
  cout <<"    |      x      |  "<<endl;
  cout <<"    +----+   +----+  "<<endl;
  cout <<"         |   |       "<<endl;
  cout <<"         |"<<setw(1)<<centroidX <<","<<centroidY<<setw(1)<<"|"<<endl;
  cout <<"         |   |       "<<endl;
  cout <<"    +----+   +----+  "<<endl;
  cout <<"    |      x      |  "<<endl;
  cout <<"    +-------------+  "<<endl;
  cout <<endl;
}
if (code ==4){
  cout <<"\nHere is your T-beam centroid illustration!\n";
  cout <<"         T-beam        "<<endl;
  cout <<"   +-------------+     "<<endl;
  cout <<"   |      x      |     "<<endl;
  cout <<"   +----+   +----+     "<<endl;
  cout <<"        |   |          "<<endl;
  cout <<"        |"<<setw(1)<<centroidX <<","<<centroidY<<setw(1)<<"|"<<endl;
  cout <<"        |   |          "<<endl;
  cout <<"        |   |          "<<endl;
  cout <<"        |   |          "<<endl;
  cout <<"        +---+          "<<endl;
  cout <<endl;

}


}

double check_input(char [],char side){

double result;
if(side == 'l'){
  while (!isdigit(l_char[0]))
  {
    cout << "Standard checker at work! Manually writing the next cout PROMPT statement!" << endl;
    cout << "Wrong Input!\n";
    cout << "CORRECTLY INPUT the LENGTH (l) of your beam:";
    cin >> l_char;
  }
  length = atoi(l_char);
  result = length;
}

if(side == 'h'){
  while (!isdigit(h_char[0]))
  {
    // cout << "Standard checker at work! Manually writing the next cout PROMPT statement!" << endl;
    cout << "Wrong Input!\n";
    cout << "CORRECTLY INPUT the HEIGHT (h) of your beam:";
    cin >> h_char;
  }
  height = atoi(h_char);
  result = height;
}
 return result;
}

double check_input_pro(char str[], char side)
{
  double result;
  string label ;
  if (side == 'l') label = "LENGTH";
  if (side == 'h') label = "HEIGHT";
  if (side == 'a') label = "L1";
  if (side == 'b') label = "L2";
  if (side == 'c') label = "L3";
  if (side == 'x') label = "H1";
  if (side == 'y') label = "H2";
  if (side == 'z') label = "H3";

  while (!isdigit(str[0]))
  {
    // cout << "Pro checker at work! Next cout PROMPT statement will dynamically changed!" << endl;
    cout << "Wrong Input!\n";
    cout << "CORRECTLY INPUT the " << label << " (" << side << ") of your beam:";
    cin >> str;
  }
  result = atoi(str);
  return result;
}

char change_shape(){

  cout << "\nChange your type of beam (case-insensitive):";
  cin >> typeofbeam;
  typeofbeam = tolower(typeofbeam); // make sure the entered letter of choice is in lowercase for condition

  // CONDITION and LOOP version 2
  // if(typeofbeam == 's' or typeofbeam == 'h' or typeofbeam == 'i' or typeofbeam == 't')
  //     beam_selection(typeofbeam);
  // else{
  //     do{
  //         cout << "\nWRONG INPUT DETECTED: "<<++countWrongInput<< " times!\n";
  //         cout << "\nRe-enter the correct choice (case-insensitive):";  cin >> typeofbeam;
  //     }while(typeofbeam != 's' and typeofbeam != 'h' and typeofbeam != 'i' and typeofbeam != 't');
  //        draw_centroid_code = beam_selection(typeofbeam); // if correct, back to function
  //   }

  // CONDITION and LOOP version 1 (simple while loop)
  while (typeofbeam != 's' and typeofbeam != 'h' and typeofbeam != 'i' and typeofbeam != 't')
  {
    cout << "\nWRONG INPUT DETECTED: " << ++countWrongInput << " times!\n";
    if (countWrongInput > 3)
    {
      cout << "\nSeriously...Cant you see properly?! Exiting now...";
      break;
    }
    cout << "\nRe-enter the new beam of choice (case-insensitive):";
    cin >> typeofbeam;
    typeofbeam = tolower(typeofbeam); // make sure the entered letter of choice is in lowercase for condition
  }
  return typeofbeam;
}


void choose_beam_type(){
  cout << "\nChoose your type of beam (case-insensitive):";
  cin >> typeofbeam;
  typeofbeam = tolower(typeofbeam); // make sure the entered letter of choice is in lowercase for condition

  // CONDITION and LOOP version 1 (simple while loop)
  while (typeofbeam != 's' and typeofbeam != 'h' and typeofbeam != 'i' and typeofbeam != 't')
  {
    cout << "\nWRONG INPUT DETECTED: " << ++countWrongInput << " times!\n";
    if (countWrongInput > 3)
    {
      cout << "\nSeriously...Cant you see properly?! Exiting now...";
      countWrongInput = 0; // reset in case user wish to change shape
      break;
    }
    cout << "\nRe-enter the correct choice (case-insensitive):";
    cin >> typeofbeam;
    typeofbeam = tolower(typeofbeam); // make sure the entered letter of choice is in lowercase for condition
  }

  do
  {

    if (typeofbeam == 's')
      strncpy(selected_beam, "Solid Beam", 12);
    if (typeofbeam == 'h')
      strncpy(selected_beam, "Hollow Beam", 12);
    if (typeofbeam == 't')
      strncpy(selected_beam, "T-Beam", 12);
    if (typeofbeam == 'i')
      strncpy(selected_beam, "I-Beam", 12);
    cout << "\nYou have chosen [" << selected_beam << "] as your selection." << endl;
    cout << "Do you wish to change shape? Press y to CHANGE beam." << endl;
    cout << "Press n to proceed with [" << selected_beam << "]" << endl;
    cout << "Waiting for input:";
    cin >> change_beam;
    change_beam = tolower(change_beam);
    if (change_beam == 'y')
      typeofbeam = change_shape();
  } while (change_beam != 'n');
}

void restart_prompt(){
  cout << "Do you wish to restart? Y to restart N to Exit:";
  cin >> restart;
  if (restart == 'y' or restart == 'Y') main(); // if y is entered, return back to main
  while (restart != 'n')
  {
    cout << "Invalid input! Only Y or N input is allowed!" << endl;
    cout << "Do you wish to restart? :";
    cin >> restart;
  }
  cout << "\nProgram Exited!\n";
}
