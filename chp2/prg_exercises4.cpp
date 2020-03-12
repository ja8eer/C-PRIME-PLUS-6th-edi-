///////////////////////////////////////////////////////////////////
//Write a program that asks the user to enter the number of seco-//
//nds as an integer value (use type long , or, if available, long//
//long ) and that then displays the equivalent time in days, hours/
//, minutes, and seconds. Use symbolic constants to represent the//
//number of hours in the day, the number of minutes in an hour,  //
//and the number of seconds in a minute.The output should look l-//
//ike this:							 //
//	Enter the number of seconds: 31600000			 //
//	31600000 seconds = 365 days, 17 hours, 46 minutes, 40 se-//
//	conds							 //
////////////////////////////////////////////////created by jabeer//
#include <iostream>
using namespace std;
const int day = 86400;
const int hour = 3600;
const int minute = 60;
int main(){
	long seconds;
	int days, minutes, hours, secondsLeft;
 	cout << "Enter the number of seconds: ";
	cin >> seconds;
 	days = seconds / day;
	hours = (seconds % day) / hour;
	minutes = (seconds - days * day - hours * hour) / minute;
	secondsLeft = seconds - days * day - hours * hour - minutes * minute;
 	cout << seconds << " Seconds = " << days << " days, " << hours; 
	cout<< " hours, " << minutes << " minutes, ";
	cout<< secondsLeft << " seconds" << endl;
}
