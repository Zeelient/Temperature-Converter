// Menu Driven - Chapter 6, Temperature Converter
// 
// Name:
// Date:
//
#include <iostream>
using namespace std;

void displayMenu();
void calculateTemp(float,float);


int main()
{	
	const int fahToCel=1, celToFah=2, quit=3;

    int f, c;

	int choice;
	double temp;

	
do{
    
    displayMenu();
   cout << "Choose an option:";
  cin >> choice;
    cout << "Enter a temperature:";
    cout << endl;



while (choice < fahToCel || choice > quit)
{
   cout << "The valid choices are 1 through 3.\n";
    cin >> choice;
}

if ( choice != quit || choice != celToFah || choice!=fahToCel)
{
    
    
 switch(choice)
 {
     
case fahToCel:
   calculateTemp(c,f);
    cin >> temp;
    if(choice ==1)
    {c=(temp-32)*5/9;
    }
     cout <<"The Celsius temperature is "<<c<< endl;
 

     break;
     




case celToFah:
      calculateTemp(c,f);
      cin >> temp;
      if(choice==2)
      {f=(9/5)*temp+32;
            }
            cout <<"The Fahrenheit temperature is "<<f<< endl;

     break;
     
 }
}
 } while(choice!=quit);
 cout <<"Program ending"<< endl;
 
   return 0;
}


 void displayMenu()
{
 
cout <<"Temperature Converter\n\n";
cout <<"1. Convert Fahrenheit to Celsius\n";
cout <<"2. Convert Celsius to Fahrenheit\n";
cout <<"3. Quit"<< endl;
 
}

void calculateTemp(float c, float f)
{
double temp; 
c=(temp-32)*5/9;
f=(9/5)*temp+32;
 
}
