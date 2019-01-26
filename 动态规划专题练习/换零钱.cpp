#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool cmp(int i,int j) {
	return i<j;
}

class Exchange {
	public:

		int countWays(vector<int> changes, int n, int x) {
			// write code here
			int *dp;
			dp=new int[x+1];
			for(int i=0; i<=x; i++)
				dp[i]=0;
			dp[0]=1;
			sort(changes.begin(),changes.end(),cmp);

			for(int i=0; i<n; i++) {
				for(int j=changes[i]; j<=x; j++) {
					dp[j]+=dp[j-changes[i]];
				}
			}

			return dp[x];

		}
};

int main() {

	Exchange *e=new Exchange;
	int arr[]= {5,10,25,1};
	vector<int> v(arr,arr+4);
	cout<<e->countWays(v,4,15)<<endl;
	cout<<e->countWays(v,4,0)<<endl;
	return 0;
}
