///////////////////////////////////////////////////////////
//Write a short program that asks for your height in feet//
//and inches and your weight\in pounds. (Use three varia-//
//bles to store the information.) Have the program report//
//your body mass index (BMI).To calculate the BMI, first //
//convert your height in feet and inches to your height in/
//inches (1 foot = 12 inches).Then convert your height in//
//inches to your height in meters by multiplying by 0.0254/
//Then convert your weight in pounds into your mass in ki-/
//lograms by dividing by 2.2. Finally, compute your BMI by/
//dividing your mass in kilograms by the square of your  //
//height in meters. Use symbolic constants to represent  //
// the various conversion factors. 			 //
// ///////////////////////////////////created by jabeer////
#include<iostream>
using namespace std;
#define FOOT 12
#define METER 0.0254
#define KILO 2.2
int main(){
	float pounds,feet,inches;
	cout<<"enter your height in feet :";
	cin>>feet;
	cout<<"enter your height in inches :";
	cin>>inches;
	cout<<"enter your weight in pounds :";
	cin>>pounds;
	auto heightInches = feet * FOOT + inches;
	auto meters = heightInches * METER;
	auto weightKG = pounds / KILO;
	auto bmi = weightKG / (meters * meters);
	cout << "Your Body Mass Index(BMI) is: " << bmi << endl;

}
