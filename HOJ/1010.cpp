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
	//奇偶剪支 计算两点间绝对路径，如果能绕开障碍到达目的地，那么路径必然为这个绝对路径增加偶数步 
	int k=(t-count)-(abs(x-d_x)+abs(y-d_y));
	if(k<0||k%2==1) {
		//若k为奇数则分支无效，k<0则不可达
		return ;
	}
	//下
	if(checkbound(x+1,y,n,m)&&!visited[x+1][y]&&routes[x+1][y]!='X') {
		visited[x+1][y]=true;
		dfs(x+1,y,n,m,t,count+1,flag);
		visited[x+1][y]=false;

		//上
	}
	if(checkbound(x-1,y,n,m)&&!visited[x-1][y]&&routes[x-1][y]!='X') {
		visited[x-1][y]=true;
		dfs(x-1,y,n,m,t,count+1,flag);
		visited[x-1][y]=false;

		//右
	}
	if(checkbound(x,y+1,n,m)&&!visited[x][y+1]&&routes[x][y+1]!='X') {
		visited[x][y+1]=true;
		dfs(x,y+1,n,m,t,count+1,flag);
		visited[x][y+1]=false;

		//左
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
