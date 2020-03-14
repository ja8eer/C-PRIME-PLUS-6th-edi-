#include<iostream>
using namespace std;
struct candybar{
	char name[20];
	float weight;
	int calories;
};
int main(){
	candybar *sn= new candybar[3]  {
		{"Mocha Munch",2.3,350},
			{"galaxy",3.3,300},
			{"loly pop",4.3,230}
	};
	cout<<"Brand name :"<<sn->name<<endl;
	cout<<"weight :"<<sn->weight<<endl;
	cout<<"calories :"<<sn->calories<<endl<<endl;
	cout<<"Brand name :"<<(sn+1)->name<<endl;
        cout<<"weight :"<<(sn+1)->weight<<endl;
        cout<<"calories :"<<(sn+1)->calories<<endl<<endl;
	cout<<"Brand name :"<<(sn+1)->name<<endl;
        cout<<"weight :"<<(sn+1)->weight<<endl;
        cout<<"calories :"<<(sn+1)->calories<<endl;

	
}

