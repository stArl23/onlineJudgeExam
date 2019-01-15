#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;


int main(){
	int num,t,num1;
	string temp="";
	while(cin>>num){
		cin.ignore();
		getline(cin,temp,'\n');
		istringstream iss(temp);
		int *a=new int[101];
		while(iss>>t){
			a[t]=1;
		}
		
		cin>>num1;
		cin.ignore();
		getline(cin,temp,'\n');
		istringstream iss1(temp);
		while(iss1>>t){
			if(a[t]==1)cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl; 
		}
	}
	
}
