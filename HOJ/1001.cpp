#include<iostream>
using namespace std;

int main(){
	long long n;
	while(cin>>n){
		long long sum=0;
		for(long long i=1;i<=n;i++){
			sum+=i;
		}
		cout<<sum<<"\n"<<endl;
	}
}
