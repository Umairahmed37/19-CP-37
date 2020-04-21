#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int odd_nos=1;
	int sumo=0;
	int sume=0;
	int number_o=0;
	int number_e=1;
    while(number_o<=9){
    	sumo=sumo+((2*number_o)+1);
    	number_o++;
	}
	cout<<endl;
	cout<<"     10 ODD NUMBER SUM IS = ";cout<<sumo<<endl;
	while(number_e<=9){
		sume=sume+(2*number_e);
    	number_e++;
	}
	cout<<"     10 EVEN NUMBER SUM IS = ";cout<<sume;
	

  getch();
   return 0;
}
