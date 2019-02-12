#include<iostream>

using namespace std;

int main(){
	string input;
	while(cin>>input){
		int l=input.size();
		int n1,n2,n3,n;
		n=l+2;
		n1=n3=n/3;
		n2=n-n1-n3;
		
		int j=0,z=input.size()-1;
		
		for(int i=0;i<n1-1;i++){
			cout<<input[j+i];
			for(int k=0;k<(n2-2);k++)
				cout<<" ";
			cout<<input[z-i];
			cout<<endl;
		}
		
		cout<<input.substr(j+n1-1,n2)<<endl;
	}
	return 0;
}
