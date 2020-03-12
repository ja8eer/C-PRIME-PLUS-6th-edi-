/////////////////////////////////////////////////////////////////////
//Write a program that has main() call a user-defined function that//
//takes a distance in light years as an argument and then returns  //
//the distance in astronomical units.The program should request the// 
//light year value as input from the user and display the result?  //
//								   //
/////////////////////////////////////////////////created by jabeer///
#include<iostream>
using namespace std;
float astro_unit(float);
int main(){
	float light_year;
	cout<<"enter the number of light year :";
	cin>>light_year;
	cout<<light_year<<"light years = "<< astro_unit(light_year);
	cout<<" atronomical units\n";
}
float astro_unit(float light_year){
	return light_year*63240;
}

