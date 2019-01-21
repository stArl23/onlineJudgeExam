#include<iostream>
using namespace std;

long long chenjie(long long num){
	long long result=1;
	for(long long i=2;i<=num;i++){
		result*=i;
	}	
	return result;
}

int main(){
	long long num;
	while(cin>>num){
		long long result=chenjie(num);
		cout<<result<<endl;
	}
	return 0;
}
