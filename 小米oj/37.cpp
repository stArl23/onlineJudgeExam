#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

vector<int> maps[101];
int is_visited[101];

void dfs(int start,int n,bool& flag) {
	if(flag) {
		for(int i=0; i<maps[start].size(); i++) {
			int end=maps[start][i];
			if(is_visited[end]==0) {
				is_visited[end]=1;
				dfs(end,n,flag);
			} else if(is_visited[end]==1) {
				flag=false;
				break;
			} else {
				continue;
			}
		}
		//已经访问结束
		is_visited[start]=-1;
	}
}
int main() {
	memset(is_visited,0,sizeof(is_visited));
	int n,start,end;
	cin>>n;
	cin.ignore(); 
	//init
	for(int i=0; i<=100; i++){
		maps[i].clear();
	}
		   
	//共有几个节点
	string line;
	while(getline(cin,line)){
		if(line=="")break;
		istringstream iss(line);
		iss>>start>>end;
		maps[start].push_back(end);
	}

	bool flag=true;
	for(int i=0; i<n; i++) {
		if(flag&&is_visited[i]==0) {
			dfs(i,n,flag);
		}
	}

	if(flag) {
		cout<<"true"<<endl;
	} else {
		cout<<"false"<<endl;
	}

	return 0;
}
