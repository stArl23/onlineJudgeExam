/*
 * main.cpp
 *
 *  Created on: 2014.7.17
 *      Author: spike
 */
 
/*eclipse cdt, gcc 4.8.1*/
 
#include <stdio.h>
#include <memory.h>
#include <limits.h>
 
#include <utility>
#include <queue>
#include <algorithm>
 
using namespace std;
 
class Program {
	static const int MAX_N = 100;
 
	int n=4, W=5;
	int w[MAX_N] = {2,1,3,2}, v[MAX_N]={3,2,4,2};
	int dp[MAX_N+1];
public:
	void solve() {
		memset(dp, 0, sizeof(dp));
		for (int i=0; i<n; ++i) {
			for (int j=W; j>=w[i]; --j) {
				dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
			}
			
			for(int z=0;z<=W;z++){
				printf("%d ", dp[z]);
			}
			printf("\n");
		}
		
		printf("result = %d\n", dp[W]);
	}
};
 
 
int main(void)
{
	Program P;
	P.solve();
    return 0;
}
 
 
 

