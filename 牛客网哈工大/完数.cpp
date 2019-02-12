#include<iostream>
using namespace std;

bool is_ws(int num){
	int sum=0;
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum+=i;
		}
		if(sum>num){
			break;
		}
	}
	
	return sum==num;
}

int main(){
	int n;
	while(cin>>n){
		for(int i=1;i<=n;i++){
			if(is_ws(i)){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
