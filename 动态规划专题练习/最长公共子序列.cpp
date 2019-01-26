#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class LCS {
public:
    int findLCS(string A, int n, string B, int m) {
        // write code here
        int dp[300][300];
        
        for(int i=0;i<n;i++)
        	dp[i][0]=0;
        for(int j=0;j<m;j++)
        	dp[0][j]=0;
        	
        for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
        		if(A.at(i)==B.at(j)){
        			dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		
		return dp[n-1][m-1];
    }
};

int main(){
	
	LCS *l=new LCS;
	cout<<l->findLCS("1A2C3D4B56",10,"B1D23CA45B6A",12)<<endl; 
	return 0;
}
