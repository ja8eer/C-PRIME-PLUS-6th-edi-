//////////////////////////////////////////////////////////////////////
//Write a program that asks the user to enter a latitude in degrees,//
//minutes, and seconds and that then displays the latitude in deci- //
//mal format.There are 60 seconds of arc to a minute and 60 minute- //
//s of arc to a degree; represent these values with symbolic cons-  //
//tants.You should use a separate variable for each input value.A   //
//sample run should look like this:				    //
//	Enter a latitude in degrees, minutes, and seconds:	    //
//	First, enter the degrees: 37				    //
//	Next, enter the minutes of arc: 51			    //
//	Finally, enter the seconds of arc: 19			    //
//	37 degrees, 51 minutes, 19 seconds = 37.8553 degrees   	    //
/////////////////////////////////////////////created by jabeer////////
#include<iostream>
using namespace std;
int main(){
	int degree,minute,second;
	cout<<"enter a lattitude in degree seconds and minutes :\n";
	cout<<"First , enter the degree :";
	cin>>degree;
	cout<<"Next , enter the minute of arc :";
	cin>>minute;
	cout<<"final ,enter the second of arc :";
	cin>>second;
	float latitude = float (degree) + ( float (minute) +  float (second)/60)/60;
	cout<<degree<<" degrees , "<<minute<<" minutes , "<<second<<"seconds =";
	cout<<latitude<<" degrees\n";
}

