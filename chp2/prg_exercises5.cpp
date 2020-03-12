/////////////////////////////////////////////////////////////////////
//Write a program that has main() call a user-defined function that//
//takes a Celsius temperature value as an argument and then returns//
// the equivalent Fahrenheit value.				   //
////////////////////////////////////////////////Created by jabeer////
#include<iostream>
using namespace std;
int fahrenheit(float);
int main(){
	float celsius;
	cout<<"please enter a celsius value :";
	cin>>celsius;
	cout<<celsius<<" degrees celsius is "<<fahrenheit(celsius);
	cout<<" degree Fahrengeit\n";
}
int fahrenheit(float c){
	return 1.8*c+32.0;
}
