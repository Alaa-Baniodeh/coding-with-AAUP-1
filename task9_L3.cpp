#include<iostream>
using namespace std;
int main(){
	
	int username = 123456;
	int password = 654321;
	
	int FlagEnter = 1;
	int Errorpassword = 600;
	int Errorusername = 700;
	
	int Enterusername;
	int Enterpassword;
	
	cout<<"plz enter the user name : ";
	cin>>Enterusername;
	
	if(username==Enterusername){
		
	cout<<"plz enter the password : ";
	cin>>Enterpassword;	
	
	if(password==Enterpassword)	{
		
		//cout<<"welcome user :) "<<endl;
	}
	else{
		FlagEnter = 0;
		cout<<"Error # "<<Errorpassword<<endl;
	}
		
		
	}
	else{
		FlagEnter = 0;
		cout<<"Error # "<<Errorusername<<endl;
	}
	
	if(FlagEnter==1){
		
		cout<<"welcome user :)"<<endl;
	}
	else{
		cout<<"wrong pasword or username :( "<<endl;
	}
	return 0;
}
