#include<iostream>
#include<string>
#include<cstring>
#include<queue>
#include<cstdio>
#define MAX 99999
using namespace std;
struct Node {
	int x;
	int y;
	int m;
};

bool is_visited[8][8];
int direct[8][2]= {{2,1},{-2,1},{1,2},{-1,2},{2,-1},{-2,-1},{1,-2},{-1,-2}};
int s_x,s_y,d_x,d_y,move1;

bool checkbound(int x,int y) {
	return x>=0&&x<8&&y>=0&&y<8;
}

void bfs(queue<Node> q) {
	while(!q.empty()) {
		Node node=q.front();
		q.pop();
		if(node.m>=move1&&move1!=MAX) {
			continue;
		}
		if(node.x==d_x&&node.y==d_y) {
			if(node.m<move1||move1==MAX) {
				move1=node.m;
			}
			continue;
		}


		for(int i=0; i<8; i++) {
			int x1=node.x+direct[i][0];
			int y1=node.y+direct[i][1];
			if(checkbound(x1,y1)&&!is_visited[x1][y1]) {
				Node node1;
				node1.x=x1;
				node1.y=y1;
				node1.m=node.m+1;
				is_visited[x1][y1]=true;
				q.push(node1);
			}

		}

	}
}

int main() {
	string s,d;
	while(cin>>s>>d) {
		move1=MAX;
		memset(is_visited,false,sizeof(is_visited));
		queue<Node> q;
		s_x=s[0]-'a';
		s_y=s[1]-'1';
		d_x=d[0]-'a';
		d_y=d[1]-'1';
		Node node;
		node.x=s_x;
		node.y=s_y;
		node.m=0;
		q.push(node);
		is_visited[s_x][s_y]=true;
		bfs(q);
		printf("To get from %s to %s takes %d knight moves.\n",s.c_str(),d.c_str(),move1);
	}
	return 0;
}
