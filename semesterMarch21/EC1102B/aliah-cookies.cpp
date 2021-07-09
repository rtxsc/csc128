#include <iostream>
#include <ctype.h>
using namespace std;

char code, name, pack_size, dOpt, nextCust;
int qty, almondL, hnyC, semp;
double price, totalPrice, totalSales, totalSold, dPrice;

void resetVar() 
	{
	char name = 'x', pack_size = 'x', nextCust = 'N', dOpt = 'x';                          // Cookies name, pack_size & delivery option
	float totalPrice = 0.0;                                              // Declaration price according quantity
	float calcD_opt = 0.0;                                                // Declaration price inlcuding delivery option
	float price = 0, totalSold = 0, totalSales = 0, addPrice = 0;
	int totalCust = 0;                                              // Number of customer
	int qty = 0, almondL = 0, hnyC = 0, semp = 0;                       // To control number chosen for each cookies
	}

int dFunc()
		{
			char tmpSF;
			do 
			{
				tmpSF = 's'; // s here stands for stop

				cout << "\n\n-----------------------------------------------------------------" << endl;
				cout << "CODE\t DELIVERY OPTION\t PRICE(RM)";  
				cout << "\n-----------------------------------------------------------------" << endl;
				cout << "P\t Postage (Post)\t\t 10.00\t" << endl;
				cout << "C\t Cash On Delivery\t 5.00" << endl;
				cout << "-----------------------------------------------------------------" << endl;
				cout << "Enter delivery option : ";
				cin >> dOpt;
				cout << "\n";
			
				switch (dOpt)
				{
					case 'P':
					case 'p':
			    			dPrice = 10.00;
						break;
					case 'C':
					case 'c':
			    			dPrice = 5.00;
						break;
					default:
			    			cout << "\nInvalid delivery optione code! Please try again.\n";
						tmpSF = 'r'; // r here stands for restart
						break;
				}

				if(tmpSF!='r'){
					do{
						cout << "Are you sure with your Delivery Option? Y or N:";
						cin >> tmpSF; 
						tmpSF = tolower(tmpSF);
					}while(tmpSF!= 'y' && tmpSF!='n');
					
				}
	
			}
			while (tmpSF == 'r' || tmpSF == 'n');
			
			return dPrice;
		}

int main () 
{
	//repetition for next customer
	
	do{
		// Display Meal
		cout << "\n";
		cout << "--------------------------------------------------------------------" << endl;
		cout << "CODE\t\t COOKIES NAME\t\t LARGE (RM)\t MEDIUM (RM)" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "A\t\t ALMOND LONDON\t" << endl; 
		cout << "H\t\t HONEY CORNFLAKES\t   70.00\t   35.00" << endl;
		cout << "S\t\t SEMPERIT\t\t" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "ENTER TYPE OF COOKIE (A / H / S) : ";
		cin >> code;
		cout << "\nSELECT pack_size (L | M) : ";
		cin >> pack_size;
		
			if (pack_size == 'L' || pack_size =='l') {
				price = 70.00;
			}
			
			else if (pack_size == 'M' || pack_size =='m') {
				price = 35.00;
			}
			else {
				cout << "INVALID pack_size OPTION. PLEASE TRY AGAIN" << endl;
			}
			
		cout << "\nENTER QUANTITY : ";
		cin >> qty;
	
		// Total item sold
		totalSold += qty;
		// Price according quantity
		totalPrice += price * qty;
		// Calculate total sales of the day
		totalSales += totalPrice;
		
		// Repeated to enter next customer
		cout << "\n\n** END? (Y/N) : ";
		cin >> nextCust;
		cout << "\n..................................................................\n";
		
		switch (code) 
		{
		// Almond London
		case 'A' :
		case 'a' :
			almondL += dFunc();
			break;
			
		// Honey Cornflakes
		case 'H' :
		case 'h' :
			hnyC += dFunc();
			break;
			
		// Semperit
		case 'S' :
		case 's' :
			semp += dFunc();
			break;
			
		default :
			cout << "\nCODE INVALID! PLEASE TRY AGAIN. THANK YOU!" << endl ;
			resetVar();
			break;
		}
		
		int tmp0 = 0; // 0 means exit, 1 means continue
	
		switch (nextCust) {
			case 'Y':
			case 'y':
	            		// Seller's receipt
	            		cout << "\nCOOKIES BY THE SISTERS";
	            		cout << "\n-----------------------------------------------------------------";
	            		cout << "\nALMOND LONDON : " << almondL; 
	            		cout << "\nHONEY CORNFLAKES : " << hnyC;
	            		cout << "\nSEMPERIT : " << semp;
	            		cout << "\nTOTAL COOKIES SOLD : " << totalSold;
	            		cout << "\nDELIVERY CHARGES (COD/Post) : " << dPrice;
	            		cout << "\nTOTAL PRICE : RM" << totalPrice + dPrice;
	            		cout << "\n-----------------------------------------------------------------";
	            		cout << "\nTHANK YOU FOR PURCHASING FROM COOKIES BY THE SISTERS! HAVE A NICE DAY~ <3" << endl;
				tmp0 = 0;
	            		break;
	           			cout << "\nSALES OF THE DAY (exc. delivery): RM" << totalSales;
						
	    		
	    	case 'N':
			case 'n': 
				cout << "Proceeding...";
				tmp0 = 1;
				break;

	    	default:
				cout << "\nInvalid response, resetting data...";
	        		nextCust = 'N';
	        		resetVar();
				tmp0 = 1;
				break;
		}			
		
			if (tmp0 == 0)
			{
			break;
			}
	}while (nextCust == 'N' || nextCust =='n'); // corrected
return 0;
}



