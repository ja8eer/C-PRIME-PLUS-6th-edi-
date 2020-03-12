//////////////////////////////////////////////////////////////
//Write a short program that asks for your height in integer//
//inches and then converts your height to feet and inches.  //
//Have the program use the underscore character to indicate //
//where to type the response.Also use a const symbolic	    //
//constant to repre-sent the conversion factor.		    //
/////////////////////////////////////created by jabeer////////
#include <iostream>
using namespace std;
int main(){
	const int feet = 12;
	int inches;
 	cout<<"Enter your height in inches: " << endl;
	cin>>inches;
 	cout<< "Your height is " << inches/feet << " and ";
        cout<< inches%feet << " inches" << endl;
 
}
