#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int fir;
	int sec;
	int thi;
	int fou;
	int i=0;
	char done='y';
	
	cout<<endl;
	cout<<"-----------------THIS PRINTS THE YEAR INTO ROMAN LETTERS-----------------\n"<<endl;
	while(done=='Y' || done=='y'){
	cout<<"ENTER THE YEAR, YOU WANT TO INTERCHANGE = ";
	cin>>fir;
	cin>>sec;
	cin>>thi;
	cin>>fou;
	
	
	while(i!=fir){
		cout<<"M";
		i++;
	}
	for(int b=1; b<=10; b++){
		if(sec==0){
			cout<<"";
			break;
		}
		else if(sec==1){
			cout<<"C";
			break;
		}
		else if(sec==2){
			cout<<"CC";
			break;
		}
		else if(sec==3){
			cout<<"CCC";
			break;
		}
		else if(sec==4){
			cout<<"CD";
			break;
		}
		else if(sec==5){
			cout<<"D";
			break;
		}
		else if(sec==6){
			cout<<"DC";
			break;
		}
		else if(sec==7){
			cout<<"DCC";
			break;
		}
		else if(sec==8){
			cout<<"DCCC";
			break;
		}
		else{
			cout<<"CM";
			break;
		}
	
	}
	for(int b=1; b<=10; b++){
		if(thi==0){
			cout<<"";
			break;
		}
			if(thi==1){
			cout<<"X";
			break;
		}
			if(thi==2){
			cout<<"XX";
			break;
		}
			if(thi==3){
			cout<<"XXX";
			break;
		}
			if(thi==4){
			cout<<"XL";
			break;
		}
			if(thi==5){
			cout<<"L";
			break;
		}
			if(thi==6){
			cout<<"LX";
			break;
		}
			if(thi==7){
			cout<<"LXX";
			break;
		}
			if(thi==8){
			cout<<"LXXX";
			break;
		}
			if(thi==9){
			cout<<"XC";
			break;
		}
		
		
	}	
	for(int b=1; b<=10; b++){
		if(fou==0){
			cout<<"";
			break;
		}
			if(fou==1){
			cout<<"i";
			break;
		}
			if(fou==2){
			cout<<"ii";
			break;
		}
			if(fou==3){
			cout<<"iii";
			break;
		}
			if(fou==4){
			cout<<"iV";
			break;
		}
			if(fou==5){
			cout<<"V";
			break;
		}
			if(fou==6){
			cout<<"Vi";
			break;
		}
			if(fou==7){
			cout<<"Vii";
			break;
		}
			if(fou==8){
			cout<<"Viii";
			break;
		}
			if(fou==9){
			cout<<"iX";
			break;
		}
	}
	cout<<endl;
	cout<<"\nDO YOU WANT TO CONVERT ANOTHER YEAR, TYPE Y OR N = ";
	cin>>done;
	i=0;
	
	
}
cout<<"THANKS FOR USING OUR APPLICATION";
	

   getch();
   return 0;
}
