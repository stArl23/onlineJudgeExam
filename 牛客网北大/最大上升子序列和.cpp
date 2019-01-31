#include<iostream>
#include<algorithm>
using namespace std;

long long dp[1001];
long long nums[1001];
int main(){
	int num;
	while(cin>>num){
		for(int i=1;i<=num;i++){
			cin>>nums[i];
			dp[i]=nums[i];
		}
		
		for(int i=1;i<=num;i++){
			for(int j=1;j<i;j++){
				if(nums[i]>nums[j]){
					dp[i]=max(dp[i],dp[j]+nums[i]);
				}
			}
		} 
		
		long long tmax=dp[1];
		for(int i=2;i<=num;i++){
			if(tmax<dp[i])tmax=dp[i];
		}
		
		cout<<tmax<<endl;
	}
	return 0;
}
