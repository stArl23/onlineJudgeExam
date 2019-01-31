#include<iostream>
#include<vector>
#include<cstring>
#include<climits>
#define INF 999999

using namespace std;


int sides[601];
int edges[601][601];
int costs[601][601];
int main() {
	int n;
	while(cin>>n&&n!=0) {
		int line_n,start,end,time;

		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				edges[i][j]=INF;
			}
			edges[i][i]=0;
		}



		cin>>line_n;
		for(int i=0; i<line_n; i++) {
			cin>>start>>end>>time;
			//还会有重复的边找最小的 
			if(edges[start][end]>time){
				edges[start][end]=time;
				edges[end][start]=time;
			}
		}



		for(int i=1; i<=n; i++) {
			cin>>sides[i];
		}


		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				//1 to 2 通 2 to 1 不通
				if(sides[i]==2&&sides[j]==1) {
					edges[i][j]=INF;
				}
			}
		}

		//init
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				costs[i][j]=edges[i][j];
			}
		}


		//floyd 算法
		for(int k=1; k<=n; k++) {
			for(int start=1; start<=n; start++) {
				for(int end=1; end<=n; end++) {
					if(costs[start][end]>costs[start][k]+costs[k][end]) {
						costs[start][end]=costs[start][k]+costs[k][end];
					}
				}
			}
		}

		cout<<((costs[1][2]==INF)?-1:costs[1][2])<<endl;
	}
	return 0;
}
