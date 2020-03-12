/////////////////////////////////////////////////////////////////////////
//Write a program that asks you to enter an automobile gasoline consum-//
//ption figure in the European style (liters per 100 kilometers) and c-//
//onverts to the U.S. style of miles per gallon. Note that in addition //
//to using different units of measurement, the U.S. approach (distance //
/// fuel) is the inverse of the European approach (fuel / dis-tance).  //
//Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 lit-  //
//ers.Thus, 19mpg is about 12.4 l/100 km, and 27 mpg is about 8.7      //
//l/100 km.							       //
////////////////////////////////////////////////////created by jabeer////
#include <iostream>
using namespace std;
int main() {
       const float milesPer100km = 62.14;
       const float litersPerGallon = 3.875;
       cout << "Enter automobile gasline consumption"; 
       cout<<"figure in the European stype (litters per 100 kilometers) :";
       double lp100km;
       cin >> lp100km;
       float mpg = 1 / (lp100km / litersPerGallon)  * milesPer100km;
       cout << lp100km << " litters per 100 kilometers = "<< mpg
              << "/100 km miles per gallon"<< endl;
       
}

