#include<iostream>
#include<algorithm>
using namespace std;
int dp[26];
int daodang[26];
int main(){
	int num;
	while(cin>>num){
		for(int i=1;i<=num;i++){
			cin>>daodang[i];
		}
		
		for(int i=1;i<=num;i++)
			dp[i]=0;
			
		for(int i=1;i<=num;i++){
			int tmax=1; 
			for(int j=1;j<i;j++){
				if(daodang[i]<=daodang[j]){
					tmax=max(tmax,dp[j]+1);
				}
			}
			dp[i]=tmax;
		}
		
		int tmax=1;
		for(int i=1;i<=num;i++){
			tmax=max(tmax,dp[i]);
		}
		
		cout<<tmax<<endl;
	}
	return 0;
}
