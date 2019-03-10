#include<iostream>
#include<cstring>
#include<queue>
#define MAX 0x3f3f3f3f


using namespace std;

int routes[401][401];
int dist1[401],dist2[401];

int bfs(int value,int dist[],int n){
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		int k=q.front();
		q.pop();
		for(int j=1;j<=n;j++){
			if(routes[k][j]==value&&dist[j]==0){
				dist[j]=dist[k]+1;
				q.push(j);
				if(j==n){
					return dist[j];
				}
			}
		}
	}
	
	return -1;
	
}

int main(){
	int n,m;
	cin>>n>>m;
	memset(dist1,0,sizeof(dist1));
	memset(dist2,0,sizeof(dist2));
	//1 为铁路，2为公路 
	for(int i=0;i<m;i++){
		int start,end;
		cin>>start>>end;
		routes[start][end]=1;
		routes[end][start]=1;
	} 
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==i){
				continue;
			}
			if(routes[i][j]==0){
				routes[i][j]=2;
			}
		} 
	}
	
	int a,b;
	a=bfs(1,dist1,n);
	b=bfs(2,dist2,n);
	
	if(a==-1||b==-1){
		cout<<"-1"<<endl;
	}else{
		cout<<((a>b)?a:b)<<endl;
	}
	
	return 0;
}
