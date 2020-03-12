////////////////////////////////////////////////////
//Write a C++ program that uses three user-defined//
//functions (counting main() as one) and produces //
//the following output:				  //
//	Three blind mice			  //
//	Three blind mice			  //
//	See how they run			  //
//	See how they run			  //
///////////////////////////////created by jabeer////
#include<iostream>
using namespace std;
void first();
void second();
int main(){
	cout<<"Three blind mice\n";
	first();
	second();
	cout<<"See how they run\n";
}
void first(){
	cout<<"Three bling mice\n";
}
void second(){
	cout<<"See how they run\n";
}
