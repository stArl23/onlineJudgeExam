#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		int sum=0;
		for(int i=1;i<=n;i++){
			if(i%7!=0&&i/10!=7&&i%10!=7){
				//cout<<i<<endl;
				sum+=i*i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
