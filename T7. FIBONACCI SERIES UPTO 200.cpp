#include<iostream>
#include <conio.h>

using namespace std;

int main()
{ 
    int n1=0;
    int n2=1;
    int sum;
    
    cout<<endl;
	cout<<"--------------------THIS PRINTS THE FIBONACCI SERIES--------------------\n"<<endl;
    cout<<"FIBONACCI SERIES UP TILL 200\n";
    cout<<n1<<endl;
    cout<<n2<<endl;
    while(sum<=200){
    	sum=n1+n2;
    	if(sum>=200){
    		break;
		}
    	cout<<sum;cout<<endl;
    	n1=n2;
    	n2=sum;
	}

    getch();
    return 0;
}
