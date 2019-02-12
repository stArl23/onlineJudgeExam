#include<iostream>
#include<sstream>

using namespace std;

int main(){
	string input;
	int max=-1000000,num;
	getline(cin,input);
	istringstream iss(input); 
	while(iss>>num){
		if(num>max){
			max=num;
		}
	}
	cout<<"max="<<max<<endl;
	return 0;
}
