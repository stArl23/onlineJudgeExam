#include<iostream>
#include<queue>
#define MAX 999999
using namespace std;

int routes[8][8];
int blood[8][8];
int step[8][8];
int n,m,s_x,s_y,d_x,d_y;
int dx[]= {-1,1,0,0};
int dy[]= {0,0,-1,1};
int second;
//BFS
struct Node {
	int x;
	int y;
};

bool checkbound(int x,int y) {
	return 0<=x&&x<n&&y>=0&&y<m;
}

void bfs(queue<Node> q) {

	while(!q.empty()) {
		Node node=q.front();
		q.pop();
		int x=node.x,y=node.y;
		if(node.x==d_x&&node.y==d_y) {
			continue;
		}

		//奇偶剪支
		for(int i=0; i<4; i++) {
			int x1=node.x+dx[i];
			int y1=node.y+dy[i];
			if(checkbound(x1,y1)&&(blood[x1][y1]==MAX||blood[x1][y1]<(blood[x][y]-1))&&routes[x1][y1]!=0) {

				//blood 必须大于1 大于0时可能到达点时r_s==0 直接爆炸探索失败 
				if(routes[x1][y1]==4&&blood[x][y]>1) {
					Node node1;
					node1.x=x1;
					node1.y=y1;
					blood[x1][y1]=6;
					step[x1][y1]=step[x][y]+1;
					q.push(node1);
					//is_visited[x1][y1]=false;
				}

				if(routes[x1][y1]==1&&blood[x][y]>1) {
					//is_visited[x1][y1]=true;
					Node node1;
					node1.x=x1;
					node1.y=y1;
					blood[x1][y1]=blood[x][y]-1;
					step[x1][y1]=step[x][y]+1;
					q.push(node1);
					//is_visited[x1][y1]=false;
				}

				if(routes[x1][y1]==3&&((step[x1][y1]>step[x][y]+1)|| step[x1][y1]==-1)&&blood[x][y]>1){
					Node node1;
					node1.x=x1;
					node1.y=y1;
					blood[x1][y1]=blood[x][y]-1;
					step[x1][y1]=step[x][y]+1;
					q.push(node1);
				}

			}
		}
	}



}

int main() {
	int k;
	while(cin>>k) {
		for(int i=0; i<k; i++) {
			cin>>n>>m;
			second=MAX;
			for(int i=0; i<n; i++) {
				for(int j=0; j<m; j++) {
					//init
					cin>>routes[i][j];
					//is_visited[i][j]=false;
					blood[i][j]=MAX;
					step[i][j]=-1;
					if(routes[i][j]==2) {
						s_x=i;
						s_y=j;
					}
					if(routes[i][j]==3) {
						d_x=i;
						d_y=j;
					}
				}
			}

			//is_visited[s_x][s_y]=true;
			blood[s_x][s_y]=6;
			step[s_x][s_y]=0;
			queue<Node> q;
			Node node;
			node.x=s_x;
			node.y=s_y;
			q.push(node);
			bfs(q);
			cout<<step[d_x][d_y]<<endl;
		}
	}
	return 0;
}
