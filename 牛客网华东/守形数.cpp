#include<iostream>
#include<sstream>
#include<string>
using namespace std;

string intToString(int i) {
	ostringstream temp;
	temp<<i;
	return temp.str();
}

int main(){
	int n;
	while(cin>>n){
		int n1=n*n;
		string s=intToString(n),s1=intToString(n1);
		if(s1.find(s)!=string::npos&&s1.find(s)!=0){
			cout<<"Yes!"<<endl;
		}else{
			cout<<"No!"<<endl;
		}
	}
	return 0;
}
