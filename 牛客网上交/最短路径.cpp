#include<cstdio>
#include<vector>
#include<algorithm>
#include<iostream>
#define INF -1
using namespace std;

int dis[100][100];
int Tree[100];
int nums[501];

int FindRoot(int x) {
	if(Tree[x]!=INF) {
		Tree[x]=FindRoot(Tree[x]);
		return Tree[x];
	} else {
		return x;
	}
}

//MST 边长是2^n 并且升序排列，说明了dis[s][k]+dis[k][i]<dis[s][i]
//最小路径即对应的最小生成树 
int main() {
	int start,end,n,m;
	int result=1;
	for(int i=0; i<=500; i++) {
		nums[i]=result;
		result=(2*result)%100000;
	}

	while(scanf("%d %d",&n,&m)!=EOF) {
		for(int i=0; i<n; i++) {
			Tree[i]=INF;
			for(int j=0; j<n; j++) {
				dis[i][j]=INF;
			}
			dis[i][i]=0;
		}

		for(int i=0; i<m; i++) {
			scanf("%d %d",&start,&end);
			int x=FindRoot(start),y=FindRoot(end);
			if(x!=y) {
				int dist=nums[i];
				for(int j=0; j<n; j++) {
					if(x==FindRoot(j)) {
						for(int k=0; k<n; k++) {
							if(y==FindRoot(k)) {
								dis[j][k]=dis[k][j]=(dis[j][start]+dis[end][k]+dist)%100000;
							}
						}
					}

				}
				Tree[y]=x;
			}
		}

		
		for(int i=1; i<n; i++) {
			printf("%d\n",dis[0][i]);
		}
	}
	return 0;
}
