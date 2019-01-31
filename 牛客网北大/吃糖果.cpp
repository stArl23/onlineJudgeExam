#include<iostream>

using namespace std;
int main(){
	int num,dp[21];
	
	while(cin>>num){
		for(int i=0;i<=num;i++){
			dp[i]=0;
		}	
		dp[0]=dp[1]=1;
		
		for(int i=2;i<=num;i++){
			dp[i]=dp[i-1]+dp[i-2];
		}
		
		
		
		cout<<dp[num]<<endl;
	}
	return 0; 
}
