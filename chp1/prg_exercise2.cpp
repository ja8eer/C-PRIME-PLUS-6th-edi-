////////////////////////////////////////////////////
//Write a C++ program that asks for a distance in //
//furlongs and converts it to yards.		  //
/////////////////////////////////created by jabeer//
(One furlong is 220 yards.)
#include<iostream>
using namespace std;
int main(){
	int furlong;
	int yard=220;
	cout<<"enter the number in the furlong :";
	cin>>furlong;
	cout<<"after the converting \n";
	yard *= furlong;
	cout<<"for "<<furlong<<" the yard is "<<yard<<endl;
}

