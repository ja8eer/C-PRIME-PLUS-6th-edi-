#include<iostream>
#include<string>
using namespace std;
int main(){
	string first_name,last_name,str;
	cout<<"enter your first name :";
	cin>>first_name;
	cout<<"enter your last name :";
	cin>>last_name;
	str.append(last_name);
	str.append(", ");
	str.append(first_name);
	cout<<"here's the information in a single string :"<<str<<endl;
}
