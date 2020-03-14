#include<iostream>
#include<string>
using namespace std;
int main(){
	string first_name,last_name,grade;
	int age;
	cout<<"enter your first name? ";
	getline(cin,first_name);
	cout<<"enter your scond name? ";
	getline(cin,last_name);
	cout<<"what letter grade do you deserve? ";
	cin>>grade;
	cout<<"what is your age? ";
	cin>>age;
	cout<<"name :"<<last_name<<", "<<first_name
		<<"\ngrade :"<<grade<<"\nage :"<<age
		<<endl;
}

