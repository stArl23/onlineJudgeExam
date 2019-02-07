#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(long long i){
	if(i<2)return false;
	if(i==2){
		return true;
	}else{
		if(i%2==0)return false;
		long long j=sqrt((double)i);
		for(long long k=3;k<=j;k++){
			if(i%k==0)return false;
		}
		
		return true;
	}
}

int main(){
	long long input;
	while(cin>>input){
		if(is_prime(input)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	} 
	return 0;
}
