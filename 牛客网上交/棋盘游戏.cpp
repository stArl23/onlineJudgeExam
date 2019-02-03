#include<iostream>

using namespace std;

bool flag[6][6];
int arr[6][6];
bool check(int x,int y) {
	return x>=0&&x<6&&y>=0&&y<6;
}

void dfs(int x,int y,int endx,int endy,int status,int sum,int &result) {
	//合法且未访问过
	flag[x][y]=true;
	if(x==endx&&y==endy) {
		if(result>sum) {
			result=sum;
		}
		return;
	} else {
		int cost=0;
		if(check(x+1,y)&&!flag[x+1][y]) {
			flag[x+1][y]=true;
			cost=arr[x+1][y]*status;
			dfs(x+1,y,endx,endy,cost%4+1,sum+cost,result);
			flag[x+1][y]=false;
		}

		if(check(x-1,y)&&!flag[x-1][y]) {
			flag[x-1][y]=true;
			cost=arr[x-1][y]*status;
			dfs(x-1,y,endx,endy,cost%4+1,sum+cost,result);
			flag[x-1][y]=false;
		}

		if(check(x,y+1)&&!flag[x][y+1]) {
			flag[x][y+1]=true;
			cost=arr[x][y+1]*status;
			dfs(x,y+1,endx,endy,cost%4+1,sum+cost,result);
			flag[x][y+1]=false;
		}

		if(check(x,y-1)&&!flag[x][y-1]) {
			flag[x][y-1]=true;
			cost=arr[x][y-1]*status;
			dfs(x,y-1,endx,endy,cost%4+1,sum+cost,result);
			flag[x][y-1]=false;
		}
	}
}


int main() {
	while(cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3]>>arr[0][4]>>arr[0][5]) {
		int startx,starty,endx,endy,result=99999;
		for(int i=1; i<6; i++) {
			for(int j=0; j<6; j++) {
				cin>>arr[i][j];
			}
		}
		cin>>startx>>starty>>endx>>endy;

		for(int i=0; i<6; i++) {
			for(int j=0; j<6; j++) {
				flag[i][j]=false;
			}
		}

		flag[startx][starty]=true;
		dfs(startx,starty,endx,endy,1,0,result);
		cout<<result<<endl;
	}
	return 0;
}
