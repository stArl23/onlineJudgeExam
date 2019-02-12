#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		bool flag=false;
		for(int i=2;i<n;i++){
			if(i*i%n==0){
				flag=true;
				break;
			}
		}
		
		if(flag){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
} 
