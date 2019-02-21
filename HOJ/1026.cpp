#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#define MAX 999999
using namespace std;

char routes[100][100];
//bool visited[100][100];
int dist[100][100];
int n,m;
bool flag;


bool checkbound(int x,int y) {
	return 0<=x&&x<n&&y>=0&&y<m;
}

struct Node {
	int x;
	int y;
};

Node pre[100][100];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

void bfs(queue<Node> queue) {
	while(!queue.empty()) {
		Node node=queue.front();
		queue.pop();
		int x=node.x,y=node.y;
		if(x==(n-1)&&y==(m-1)){
			flag=true;
		}
		for(int i=0;i<4;i++){
			int t=0;
			int x1,y1;
			x1=dx[i]+x;
			y1=dy[i]+y;
			if(checkbound(x1,y1)&&routes[x1][y1]!='X'){
				if(routes[x1][y1]>='0'&&routes[x1][y1]<='9'){
					t=routes[x1][y1]-'0';
				}
				if(dist[x1][y1]>(dist[x][y]+1+t)){
					Node node1;
					node1.x=x1;
					node1.y=y1;
					dist[x1][y1]=dist[x][y]+1+t;
					pre[x1][y1]=node;
					queue.push(node1);
				}
			}
		}


	}

}

int main() {

	while(cin>>n>>m) {
		flag=false;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin>>routes[i][j];
				//visited[i][j]=false;
				dist[i][j]=MAX;
			}
		}

		queue<Node> q;
		vector<Node> result;
		Node node;
		node.x=0;
		node.y=0;
		dist[0][0]=0;
		q.push(node);
		bfs(q);
		node.x=n-1;
		node.y=m-1;
		result.push_back(node);
//		for(int i=0;i<n;i++){
//			for(int j=0;j<m;j++){
//				cout<<dist[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		while(!node.x==0||!node.y==0){
			node=pre[node.x][node.y];
			result.push_back(node);
		}
		
		reverse(result.begin(),result.end());
		
	
		if(flag) {
			cout<<"It takes "<<dist[n-1][m-1]<<" seconds to reach the target position, let me show you the way."<<endl;
			int s=0;
			for(int i=0; i<(result.size()-1); i++) {
				Node node=result[i];
				Node node1=result[i+1];
				cout<<++s<<"s:"<<"("<<node.x<<","<<node.y<<")->"<<"("<<node1.x<<","<<node1.y<<")"<<endl;
				if(routes[node1.x][node1.y]>='0'&&routes[node1.x][node1.y]<='9') {
					int t=routes[node1.x][node1.y]-'0';
					for(int j=0; j<t; j++) {
						++s;
						cout<<s<<"s:FIGHT AT ("<<node1.x<<","<<node1.y<<")"<<endl;
					}
				}
			}
		} else {
			cout<<"God please help our poor hero."<<endl;
		}
		cout<<"FINISH"<<endl;
	}


	return 0;
}
