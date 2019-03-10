#include<iostream>
using namespace std;

char routes[21][21];
bool is_visited[21][21];
int W,H,s_x,s_y,count1;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool checkbound(int x,int y) {
	return 0<=x&&x<W&&y>=0&&y<H;
}

void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int x1=x+dx[i];
		int y1=y+dy[i];
		if(checkbound(x1,y1)&&!is_visited[x1][y1]&&routes[x1][y1]!='#'){
			is_visited[x1][y1]=true;
			count1++;
			dfs(x1,y1);	
		}
	}
}

int main(){
	while(cin>>H>>W){
		count1=1;
		if(H==0&&W==0)break;
		for(int i=0;i<W;i++){
			for(int j=0;j<H;j++){
				cin>>routes[i][j];
				is_visited[i][j]=false;
				if(routes[i][j]=='@'){
					s_x=i;
					s_y=j;
				}
			}
		}
		
		is_visited[s_x][s_y]=true;
		dfs(s_x,s_y);
		cout<<count1<<endl;
	}
	return 0;
}
