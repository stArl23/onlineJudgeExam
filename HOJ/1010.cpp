#include<iostream>
#include<cmath>
using namespace std;

char routes[7][7];
bool visited[7][7];
int d_x,d_y;

bool checkbound(int x,int y,int n,int m) {
	return 0<=x&&x<n&&y>=0&&y<m;
}

void dfs(int x,int y,int n,int m,int t,int count,bool& flag) {
	if(flag)return;
	if(t==count) {
		if(routes[x][y]=='D') {
			flag=true;
		}
		return ;

	}
	if(t<count)return;
	//��ż��֧ ������������·����������ƿ��ϰ�����Ŀ�ĵأ���ô·����ȻΪ�������·������ż���� 
	int k=(t-count)-(abs(x-d_x)+abs(y-d_y));
	if(k<0||k%2==1) {
		//��kΪ�������֧��Ч��k<0�򲻿ɴ�
		return ;
	}
	//��
	if(checkbound(x+1,y,n,m)&&!visited[x+1][y]&&routes[x+1][y]!='X') {
		visited[x+1][y]=true;
		dfs(x+1,y,n,m,t,count+1,flag);
		visited[x+1][y]=false;

		//��
	}
	if(checkbound(x-1,y,n,m)&&!visited[x-1][y]&&routes[x-1][y]!='X') {
		visited[x-1][y]=true;
		dfs(x-1,y,n,m,t,count+1,flag);
		visited[x-1][y]=false;

		//��
	}
	if(checkbound(x,y+1,n,m)&&!visited[x][y+1]&&routes[x][y+1]!='X') {
		visited[x][y+1]=true;
		dfs(x,y+1,n,m,t,count+1,flag);
		visited[x][y+1]=false;

		//��
	}

	if(checkbound(x,y-1,n,m)&&!visited[x][y-1]&&routes[x][y-1]!='X') {
		visited[x][y-1]=true;
		dfs(x,y-1,n,m,t,count+1,flag);
		visited[x][y-1]=false;
	}

}
int main() {
	int n,m,t;
	while(cin>>n>>m>>t) {

		if(n==0&&m==0&&t==0)break;
		int s_x=0,s_y=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin>>routes[i][j];
				if(routes[i][j]=='S') {
					s_x=i;
					s_y=j;
				}
				if(routes[i][j]=='D') {
					d_x=i;
					d_y=j;
				}
				visited[i][j]=false;
			}
		}

		bool flag=false;
		visited[s_x][s_y]=true;
		dfs(s_x,s_y,n,m,t,0,flag);
		if(flag) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}

	}
	return 0;
}
