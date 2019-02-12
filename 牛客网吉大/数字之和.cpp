#include<iostream>

using namespace std;

int bit_sum(int num){
	int sum=0;
	while(num>0){
		sum+=num%10;
		num/=10;
	}
	return sum;
}

int main(){
	int n;
	while(cin>>n&&n>0){
		cout<<bit_sum(n)<<" "<<bit_sum(n*n)<<endl;
	}
	return 0;
}
