#include<iostream>
using namespace std;
int main(){
	char first_name[20],last_name[20],grade;
	int age;
	cout<<"enter your first name? ";
	cin.getline(first_name,20);
	cout<<"enter your scond name? ";
	cin.get(last_name,20);
	cout<<"what letter grade do you deserve? ";
	cin>>grade;
	cout<<"what is your age? ";
	cin>>age;
	cout<<"name :"<<last_name<<", "<<first_name
		<<"\ngrade :"<<grade<<"\nage :"<<age
		<<endl;
}

