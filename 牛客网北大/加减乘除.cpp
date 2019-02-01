#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n1,n2;
	string s;
	while(cin>>n1>>s) {
		if(s!="!") {
			cin>>n2;
			if(s=="+") {
				cout<<(n1+n2)<<endl;
			} else if(s=="-") {
				cout<<(n1-n2)<<endl;
			} else if(s=="*") {
				cout<<(n1*n2)<<endl;
			} else if(s=="/") {
				if(n2!=0) {
					cout<<(n1/n2)<<endl;
				} else {
					cout<<"error"<<endl;
				}
			} else {
				if(n2!=0) {
					cout<<(n1%n2)<<endl;
				} else {
					cout<<"error"<<endl;
				}
				
			}
		} else {
			int result=1;
			for(int i=1; i<=n1; i++) {
				result*=i;
			}
			cout<<result<<endl;
		}
	}
	return 0;
}
