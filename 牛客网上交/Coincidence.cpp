#include<iostream>
#include<algorithm>
using namespace std;

int dp[101][101]; 
int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		int l1=max(s1.length(),s2.length()),
		l2=min(s1.length(),s2.length());
		
		for(int i=0;i<=l1;i++){
			for(int j=0;j<=l1;j++){
				dp[i][j]=0;
			}
		}
		
		for(int i=1;i<=s1.length();i++){
			for(int j=1;j<=s2.length();j++){
				if(s1[i-1]==s2[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		
		int max=0;
		for(int i=0;i<=l1;i++){
			for(int j=0;j<=l1;j++){
				if(max<dp[i][j]){
					max=dp[i][j]; 
				} 
			}
		}
		
		cout<<max<<endl;
	}
	return 0;
}
