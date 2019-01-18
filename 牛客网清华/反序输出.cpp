#include<iostream>
#include<string>
#include<algorithm> 

using namespace std;
int main(){
	string temp="";
	while(cin>>temp){
		reverse(temp.begin(),temp.end());
		cout<<temp<<endl;
	}
	return 0;
} 
