#include<iostream>

using namespace std;

int main(){
	int n,temp;
	while(cin>>n){
		int even=0,odd=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp%2==0){
				even++;
			}else{
				odd++;
			}
		}
		
		if(even>odd){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	} 
	return 0;
}
