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

struct Node{
	int x;
	int y;
};

int n,m,s_x,s_y,t_x,t_y;
int steps[1010][1010];
bool checkbound(int x,int y){
	return x>=0&&x<=n&&y>=0&&y<=m;
}

int direct[8][2]={{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

void bfs(){
	queue<Node> nodes;
	Node node;
	node.x=s_x;
	node.y=s_y;
	steps[s_x][s_y]=0;
	nodes.push(node);
	while(!nodes.empty()){
		Node node1=nodes.front();
		nodes.pop();
		if(node1.x==t_x&&node1.y==t_y){
			continue;
		}
		for(int i=0;i<8;i++){
			int x1=node1.x+direct[i][0];
			int y1=node1.y+direct[i][1];
			if(checkbound(x1,y1)&&steps[x1][y1]>(steps[node1.x][node1.y]+1)){
				steps[x1][y1]=steps[node1.x][node1.y]+1;
				Node node2;
				node2.x=x1;
				node2.y=y1;
				nodes.push(node2);
			}
		}
	}
}
int main(){
	cin>>n>>m>>s_x>>s_y>>t_x>>t_y;
	memset(steps,MAX,sizeof(steps));
	bfs();
	if(steps[t_x][t_y]==MAX){
		cout<<"-1"<<endl;
	}else{
		cout<<steps[t_x][t_y]<<endl;
	}
	
	 
	return 0;
}
