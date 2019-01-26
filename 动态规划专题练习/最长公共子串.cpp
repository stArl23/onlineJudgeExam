#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

class LongestSubstring {
	public:
//    int findLongest(string A, int n, string B, int m) {
//        // write code here
//        int *dp=new int[n];
//        //init
//        for(int i=0;i<n;i++)
//        	dp[i]=0;
//
//        for(int i=0;i<n;i++){
//        	for(int j=0;j<m;j++){
//        		int i1=i,j1=j,t=0;
//        		while(i1<n&&j1<m&&A.at(i1)==B.at(j1)){
//        			t++;
//        			i1++;
//        			j1++;
//				}
//				if(t>dp[i])dp[i]=t;
//			}
//		}
//
//		int result=0;
//		for(int i=0;i<n;i++){
//			if(result<dp[i])result=dp[i];
//		}
//
//		return result;
//    }
		int findLongest(string A, int n, string B, int m) {
			int **dp;
			dp=new int*[n];
			for(int i=0; i<n; i++) {
				dp[i]=new int[m];
			}

			for(int i=0; i<n; i++) {
				for(int j=0; j<m; j++) {
					dp[i][j]=0;
				}
			}

			if(n==0|m==0)return 0;

			int res=0;
			for(int i=0; i<n; i++) {
				for(int j=0; j<m; j++) {
					if(A.at(i)==B.at(j)) {
						if(i==0|j==0) {
							dp[i][j]=1;
						} else {
							dp[i][j]=dp[i-1][j-1]+1;
						}
						res=max(res,dp[i][j]);
					}


				}
			}


			for(int i = 0; i < n; i++)
				delete[] dp[i];
			delete[] dp;


			return res;
		}
};

int main() {

	LongestSubstring *l=new LongestSubstring;
	cout<<l->findLongest("cbb",3,"acabaab",7)<<endl;
	return 0;
}
