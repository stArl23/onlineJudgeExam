#include<iostream>

using namespace std;

int main(){
	int a,b,k;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		cin>>k;
		int a1=a,b1=b;
		bool flag=true;
		while(a1>0&&b1>0&&k>0){
			if(a1%10!=b1%10){
				flag=false;
				break;
			}
			a1/=10;
			b1/=10;
			k--;
		}
		
		if(flag)
			cout<<"-1"<<endl;
		else
			cout<<a+b<<endl;
	}
	return 0;
} 
