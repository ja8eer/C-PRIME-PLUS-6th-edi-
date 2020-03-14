#include<iostream>
#include<string>
using namespace std;
struct pizza{
	string name;
	int diameter;
	float weight;
};
int main(){
	pizza *ini = new pizza;
	cout<<"enter its diameter :";
	cin>>ini->diameter;
	cin.get();
	cout<<"enter the pizza company name :";
        getline(cin,ini->name);
	cout<<"enter its weight :";
	cin>>ini->weight;
	cout<<"++++++detials+++++++++\n";
	cout<<"pizza company name :"<<ini->name<<endl;
	cout<<"\tdiameter :"<<ini->diameter<<endl;
	cout<<"\tweight :"<<ini->weight<<endl;
}

