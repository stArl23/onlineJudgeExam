#include<iostream>
using namespace std;

int main(){
	int n=0;
	while(cin>>n&&n!=0){
		int time=0;
		while(n!=1){
			if(n%2==0){
				n/=2;
			}else{
				n=3*n+1;
				n/=2;
			}
			
			time++;
		}
		
		cout<<time<<endl;
	}
	return 0;
}
