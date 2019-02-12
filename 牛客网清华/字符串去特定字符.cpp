#include<iostream>

using namespace std;

int main(){
	string input;
	char a;
	while(cin>>input>>a){
		for(int i=0;i<input.size();i++){
			if(input[i]!=a){
				cout<<input[i];
			}	
		}
		cout<<endl;
	}
}
