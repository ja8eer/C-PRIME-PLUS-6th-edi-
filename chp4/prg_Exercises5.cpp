#include<iostream>
using namespace std;
struct candybar{
	char name[20];
	float weight;
	int calories;
};
int main(){
	candybar snack {"Mocha Munch",2.3,350};
	cout<<"Brand name :"<<snack.name<<endl;
	cout<<"weight :"<<snack.weight<<endl;
	cout<<"calories :"<<snack.calories<<endl;
}

