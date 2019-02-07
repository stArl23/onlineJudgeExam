#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int edges[1001][1001];

int main() {
	int n,m,dgree[1001];
	//无向图若度为偶数则有欧拉回路
	//有向图入度均等于出度则有欧拉回路 

	while(cin>>n&&n!=0) {
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				edges[i][j]=0;
			}
			dgree[i]=0;
		}

		cin>>m;
		for(int i=0; i<m; i++) {
			int start,end;
			cin>>start>>end;
			//两点必须不同 
			if(start!=end) {
				edges[start][end]=1;
				edges[end][start]=1;
			}

		}

		bool flag=true;

		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				if(edges[i][j]>0) {
					dgree[i]++;
				}
			}
		}


		for(int i=1; i<=n; i++) {
			if(dgree[i]%2==1) {
				flag=false;
				break;
			}
		}

		if(flag)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}
