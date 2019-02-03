#include<iostream>

using namespace std;

int f(int i){
	int result=1;
	if(i==0||i==1)return 1;
	for(int j=2;j<=i;j++){
		result*=j;
	}
	return result;
}

int main(){
	int fs[11],n;
	for(int i=0;i<=10;i++){
		fs[i]=f(i);
	}	
	
	while(cin>>n){
		for(int i=10;i>=0;i--){
			if(fs[i]<=n){
				n-=fs[i];
			}
		}
		
		if(n==0){
			cout<<"YES"<<endl; 
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
