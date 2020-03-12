////////////////////////////////////////////////////////////////////////////////
//Write a program that requests the user to enter the current world population//
//and the current population of the U.S. (or of some other nation of your cho-//
//ice). Store the information in variables of type long long . Have the progr-//
//am display the percent that the U.S. (or other nation’s) population is of t-//
//he world’s population.The output should look something like this:	      //
//	Enter the world's population: 6898758899			      //
//	Enter the population of the US: 310783781			      //
//	The population of the US is 4.50492% of the world population.	      //
////////////////////////////////////////////////created by jabeer///////////////
#include <iostream>
using namespace std;
int main(){
	int milesDriven;
	int gallonsUsed;
	int mpg;
 	cout << "How many miles have you driven: ";
	cin >> milesDriven;
	cout << "How many gallon of gas have you used: ";
	cin >> gallonsUsed;
 	mpg = milesDriven / gallonsUsed;
	cout << "You are getting " << mpg << " miles per gallon, what a clunker!" << endl;

}
