#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	double value;
	double guess;
	double sqRoot;
	
	cout<<endl;
	cout<<"--------------------THIS USES THE BABYLONIAN ALGORITH --------------------\n"<<endl;
   cout << "\nENTER THE NUMBER = " << endl;
   cin >> value;
   
   guess = value / 2.0;
   
   for(int n = 0; n <= 5; n++)
   {
    sqRoot = value/guess;
    guess = (guess + sqRoot)/2;
        
   }
   
   cout<<"THE SQARE ROOT OF THE NUMBER IS = " << guess << endl;
	
	
   getch();
   return 0;
}
