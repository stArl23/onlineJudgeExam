#include<iostream>
#include<cmath>

using namespace std;

//605 ms ø…”≈ªØ 
bool is_prime(int n){
	if(n==2)return true;
	for(int i=3;i<n;){
		if(n%i==0)return false;
		i+=2;
	}	
	return true;
}

int main(){
	int num;
	while(cin>>num){
		int n=0;
		for(int i=2;i<=num;){
			while(num%i==0){
				num/=i;
				n++;
			}
			if(i==2)i++;
			else i+=2;
		}
		cout<<n<<endl;
	}
}
