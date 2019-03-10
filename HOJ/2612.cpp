#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<vector>
#define MAX 99999
using namespace std;
int s1_x,s1_y,s2_x,s2_y,time,n,m;
int direct[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
char routes[200][200];
int dist1[200][200];
int dist2[200][200];

bool checkbound(int x,int y){
	return x>=0&&x<n&&y>=0&&y<m;
}
struct Node{
	int x;
	int y;
	Node(int x,int y){
		this->x=x;
		this->y=y;
	}
};


void bfs(queue<Node> q,int dist[200][200]){
	while(!q.empty()){
		Node node=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int x1=node.x+direct[i][0];
			int y1=node.y+direct[i][1];
			if(checkbound(x1,y1)&&routes[x1][y1]!='#'){
				if(dist[x1][y1]>dist[node.x][node.y]+11){
					dist[x1][y1]=dist[node.x][node.y]+11;
					Node node1(x1,y1);
					q.push(node1);
				}
			}
		}
	}
}

int main(){
	while(cin>>n>>m){
//		memset(dist1,MAX,sizeof(dist1));
//		memset(dist2,MAX,sizeof(dist2));
		vector<Node> nodes;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>routes[i][j];
				dist1[i][j]=MAX;
				dist2[i][j]=MAX;
				if(routes[i][j]=='@'){
					Node node(i,j);
					nodes.push_back(node);
				}
				if(routes[i][j]=='Y'){
					s1_x=i;
					s1_y=j;
				}
				if(routes[i][j]=='M'){
					s2_x=i;
					s2_y=j;
				}
			}
		}
		
		queue<Node> q1;
		queue<Node> q2;
		Node node1(s1_x,s1_y);
		dist1[s1_x][s1_y]=0;
		q1.push(node1);
		Node node2(s2_x,s2_y);
		dist2[s2_x][s2_y]=0;
		q2.push(node2);
		bfs(q1,dist1);
		bfs(q2,dist2);
		
		int s=MAX;
		for(int i=0;i<nodes.size();i++){
			Node node3=nodes[i];
			int m=dist1[node3.x][node3.y]+dist2[node3.x][node3.y];
			if(s>m){
				s=m;
			} 
		}
		cout<<s<<endl;
		
	}
	return 0;
}
