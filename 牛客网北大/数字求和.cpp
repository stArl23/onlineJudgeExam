#include<iostream>
using namespace std;

int main(){
	int num;
	while(cin>>num){
		int temp,sum=0;
		for(int i=0;i<5;i++){
			cin>>temp;
			if(temp<num){
				sum+=temp;
			}
		}
		
		cout<<sum<<endl;
	}
	return 0;
}
