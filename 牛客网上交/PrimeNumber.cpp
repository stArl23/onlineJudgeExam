#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(long long i){
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

long long primes[10001];
int main(){
	int index=2,t=3,n;
	primes[1]=2;
	while(index<=10000){
		if(is_prime(t)){
			primes[index]=t;
			index++;
		}
		t+=2;
	}
	
	while(cin>>n){
		cout<<primes[n]<<endl;
	}
	return 0; 
} 
