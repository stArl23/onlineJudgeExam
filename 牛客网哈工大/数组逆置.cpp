#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
	string input;
	while(cin>>input){
		reverse(input.begin(),input.end());
		cout<<input<<endl;
	}
	return 0;
} 
