#include<iostream>
using namespace std;
struct candybar{
	char name[20];
	float weight;
	int calories;
};
int main(){
	candybar snack[3] {
		{"Mocha Munch",2.3,350},
			{"galaxy",3.3,300},
			{"loly pop",4.3,230}
	};
	cout<<"Brand name :"<<snack[0].name<<endl;
	cout<<"weight :"<<snack[0].weight<<endl;
	cout<<"calories :"<<snack[0].calories<<endl<<endl;
	cout<<"Brand name :"<<snack[1].name<<endl;
        cout<<"weight :"<<snack[1].weight<<endl;
        cout<<"calories :"<<snack[1].calories<<endl<<endl;
	cout<<"Brand name :"<<snack[2].name<<endl;
        cout<<"weight :"<<snack[2].weight<<endl;
        cout<<"calories :"<<snack[2].calories<<endl;


}

