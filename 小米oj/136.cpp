#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<map>
#include<queue>
#include<set>
#include<vector>
#include<sstream>
#include<algorithm>
#define MAX 0x3f3f3f3f
using namespace std;

int direct[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
bool is_visited[1001][1001];
int values[1001][1001];
int n,m;

bool checkbound(int x,int y){
	return x>=0&&x<n&&y>=0&&y<m;
}
void dfs(int x,int y,int k){
	cout<<values[x][y]<<" ";
	is_visited[x][y]=true;
	for(int i=0;i<4;i++){
		int k1=(k+i)%4;
		int x1=x+direct[k1][0];
		int y1=y+direct[k1][1];
		if(checkbound(x1,y1)&&!is_visited[x1][y1]){
			dfs(x1,y1,k1);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>values[i][j];
			is_visited[i][j]=false; 
		}
	}
	
	
	
	dfs(0,0,0);
	cout<<endl;
	return 0;
}
