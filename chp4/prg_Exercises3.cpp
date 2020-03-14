#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char first_name[20],last_name[20],str[50];
	cout<<"enter your first name :";
	cin>>first_name;
	cout<<"enter your last name :";
	cin>>last_name;
	strcpy(str,last_name);
	strcat(str,", ");
	strcat(str,first_name);
	cout<<"here's the information in a single string :"<<str<<endl;
}
