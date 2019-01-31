#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	string input;
	while(cin>>input&&input!="0"){
		int length=input.length();
		int sum=0;
		for(int i=0;i<length;i++){
			int base=pow(2,length-i)-1;
			sum+=(input[i]-'0')*base;
		}
		cout<<sum<<endl;
	}
	return 0;
}
