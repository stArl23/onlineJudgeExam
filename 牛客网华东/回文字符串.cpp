#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	string input;
	while(cin>>input){
		string t=input;
		reverse(t.begin(),t.end());
		
		if(input==t){
			cout<<"Yes!"<<endl;
		}else{
			cout<<"No!"<<endl;
		}
	}
	return 0;
} 
