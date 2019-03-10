#include<iostream>
#include<cstring>

using namespace std;

int n,m,q,s_x,s_y,d_x,d_y;
int routes[1000][1000];
bool is_visited[1000][1000];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool checkbound(int x,int y) {
	return 0<=x&&x<n&&y>=0&&y<m;
}

void dfs(int x,int y,int direct,int pre_d,bool& flag){
	if(flag){
		return;
	}
	if(direct>2){
		return;
	}
	if(x==d_x&&y==d_y){
		flag=true;	
	}
	
	for(int i=0;i<4;i++){
		int x1=x+dx[i];
		int y1=y+dy[i];
		int prev_d=i;
		int direct1=(pre_d!=-1&&prev_d!=pre_d)?direct+1:direct;
		if(checkbound(x1,y1)&&!is_visited[x1][y1]&&(routes[x1][y1]==0||d_x==x1&&d_y==y1)){
			is_visited[x1][y1]=true;
			dfs(x1,y1,direct1,prev_d,flag);
			is_visited[x1][y1]=false;
		}
	}
	
}

int main(){
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>routes[i][j];
			}
		}
		cin>>q;
		for(int i=0;i<q;i++){
			memset(is_visited,false,sizeof(is_visited));
			cin>>s_x>>s_y>>d_x>>d_y;
			s_x--;
			s_y--;
			d_x--;
			d_y--;
			bool flag=false;
			if(routes[s_x][s_y]==routes[d_x][d_y]&&routes[s_x][s_y]!=0){
				dfs(s_x,s_y,0,-1,flag);
			}
			
			if(flag){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
			
		}
	}
	return 0;
}
