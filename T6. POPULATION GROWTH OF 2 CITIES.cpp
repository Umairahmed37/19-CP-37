#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int popA, popB, year = 0; 
    double growth_rateA, growth_rateB; 
    
	cout<<endl;
	cout<<"-----THIS PRINTS THE TIME WHEN BOTH POPULATION WILL BE EQUAL OR GREATER------\n"<<endl;
    cout << "Enter the population and growth rate of Town A: ";
    cin >> popA >> growth_rateA;
    cout << endl;

    cout << "Enter the population and growth rate of Town B: ";
    cin >> popB >> growth_rateB;
    cout << endl;

    if (popA < popB && growth_rateA > growth_rateB) {       
        do {
            (popA = ((growth_rateA / 100) * popA) + popA); // calculates population growth in one year
            (popB = ((growth_rateB / 100) * popB) + popB);
            year++;
        } while (popA < popB);

        int popDifference = popA - popB;
        cout << "Town A will surpass Town B in population after " << year << " years.\n" ;
        cout << "The final population of Town A is: " << popA << ".\n";
        cout << "The final population of Town B is: " << popB << ".\n";
    } else {
        cout << "Invalid Data.";
    }
	

   getch();
   return 0;
}
