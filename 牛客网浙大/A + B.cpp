#include<iostream>
#include<sstream>
#include<map>
using namespace std;

int main(){
	string input;
	map<string,int> nums;
	nums["one"]=1;
	nums["two"]=2;
	nums["three"]=3;
	nums["four"]=4;
	nums["five"]=5;
	nums["six"]=6;
	nums["seven"]=7;
	nums["eight"]=8;
	nums["nine"]=9;
	nums["zero"]=0;
	while(getline(cin,input)){
		if(input=="zero + zero =")break;
		istringstream iss(input);
		string temp;
		int n=0;
		int sum=0;
		while(iss>>temp){
			if(temp=="="){
				sum+=n;
				cout<<sum<<endl;
			}else if(temp=="+"){
				sum+=n;
				n=0;
			}else{
				n=n*10;
				n+=nums[temp];
			}
		}
	}
	return 0;
}
