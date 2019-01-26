#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int dp[21][21];

int main(){
	int m,n;
	while(cin>>m>>n){
		for (int i = 0; i <= n; ++i) {
            dp[0][i] = 1;
        }
        for (int i = 0; i <= m; ++i) {
            dp[i][1] = 1;
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (i < j) {
                    dp[i][j] = dp[i][i];
                }
                else {
                    dp[i][j] = dp[i][j - 1] + dp[i - j][j];
                }
            }
        }
        cout << dp[m][n] << endl;
	}
	return 0;
} 
