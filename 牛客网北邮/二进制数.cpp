#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	string temp="";
	while(n>0){
		temp+=n%2+'0';
		n/=2;
	}
	reverse(temp.begin(),temp.end());
	cout<<temp<<endl;
	return 0;	
}

