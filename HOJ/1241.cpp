#include<iostream>
#include<vector>
//Oil Deposits dfs
using namespace std;

char oil[101][101];
bool visited[101][101];
int m,n;
int direct[8][2]={{1,0},{1,1},{1,-1},{0,1},{0,-1},{-1,0},{-1,-1},{-1,1}}; 
struct Node{
	int x;
	int y;
};
bool checkbound(int x,int y){
	return 0<=x&&x<m&&y>=0&&y<n;
}

void dfs(int x,int y){
	for(int i=0;i<8;i++){
		int x1=x+direct[i][0];
		int y1=y+direct[i][1];
		if(checkbound(x1,y1)&&!visited[x1][y1]&&oil[x1][y1]=='@'){
			visited[x1][y1]=true;
			dfs(x1,y1);
		}
	}
}

int main(){
	while(cin>>m>>n){
		if(m==0)break;
		vector<Node> nodes;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>oil[i][j];
				visited[i][j]=false;
				if(oil[i][j]=='@'){
					Node node;
					node.x=i;
					node.y=j;
					nodes.push_back(node);
				}
			}
		}
		
		int t=0;
		for(int i=0;i<nodes.size();i++){
			Node node=nodes[i];
			if(!visited[node.x][node.y]){
				dfs(node.x,node.y);
				t++;
			} 
		}
		cout<<t<<endl;
	}
	return 0;
}
