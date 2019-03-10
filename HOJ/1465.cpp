#include<iostream>
#include<cstdio>
using namespace std;

long long dp[21];
int main(){
	long long n;
	dp[1]=0;
	dp[2]=1;
	for(long long i=3;i<=20;i++){
		dp[i]=dp[i-1]*(i-1)+dp[i-2]*(i-1);
	}
	
	while(scanf("%d",&n)!=EOF){
		cout<<dp[n]<<endl;
	}
	return 0;
}
