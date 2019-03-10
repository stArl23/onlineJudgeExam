#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int routes[11][11];
int result[11];
int count1,n;

void dfs(int step) {
	if(step==n) {
		count1++;
		return;
	}
	for(int i=0; i<n; i++) {
		bool flag=true;
		for(int k=0; k<n; k++) {
			for(int j=0; j<step; j++) {
				if(routes[k][j]==1) {
					if(k==i) {
						flag=false;
						break;
					}
					int x1=abs(step-j);
					int y1=abs(i-k);
					if(y1==x1){
						flag=false;
						break;
					}
				}


			}
			if(!flag)break;
		}

		if(flag) {
			routes[i][step]=1;
			dfs(step+1);
			routes[i][step]=0;
		}
	}
}
int main() {
	memset(result,-1,sizeof(result));
	while(cin>>n) {
		count1=0;
		if(n==0)break;
		memset(routes,0,sizeof(routes));
		if(result[n]==-1){
			dfs(0);
			result[n]=count1;
		}
		cout<<result[n]<<endl;
	}
	return 0;
}
