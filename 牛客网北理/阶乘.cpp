#include<iostream>
using namespace std;

long long n[21];
int main(){
	n[0]=n[1]=1;
	for(int i=2;i<=20;i++){
		n[i]=n[i-1]*i;
	} 
	
	int num,t;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>t;
		cout<<n[t]<<endl;
	}
	return 0;
}
