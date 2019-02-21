#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;

//int is_visited[10001];
//0 is visiting , -1 not visit, 1 have visited
int degree[10001];

//vector<int> edges[10001];


//void runDFS(bool& flag,int now) {
//	if(flag)
//		return;
//	if(is_visited[now]!=1) {
//		is_visited[now]=0;
//		for(int i=0; i<edges[now].size(); i++) {
//			if(is_visited[i]==-1) {
//				runDFS(flag,edges[now][i]);
//			} else if(is_visited[i]==0) {
//				flag=true;
//				return;
//			}
//		}
//
//		is_visited[now]=1;
//	}
//
//}

int main() {
	int start,end;
	int c=0;
	//两点 1.检查环路v=e-1 2.检查入度是否都小于2 
	while(cin>>start>>end) {

		//int max1=0,min1=10001;
		int edge=0;
		set<int> nodes;
		bool flag=true;
		//init
//		for(int i=0;i<=10000;i++){
//			edges[i].clear();
//		}
		memset(degree,0,sizeof(degree));
//		memset(is_visited,-1,sizeof(is_visited));
		c++;
		if(start==-1&&end==-1) {
			break;
		}else if(start==0&&end==0){
			cout<<"Case "<<c<<" is a tree."<<endl;
			continue;
		}else{
			nodes.insert(start);
			nodes.insert(end);
			edge++;
			if(flag) {
				if(degree[end]==0) {
					degree[end]++;
				} else {
					flag=false;
				}
			}
//			edges[start].push_back(end);
//			max1=max(max(start,end),max1);
//			min1=min(min(start,end),min1);
		}
	

		while(cin>>start>>end) {
			if(start==0&&end==0)break;
			nodes.insert(start);
			nodes.insert(end);
			edge++;
			if(flag) {
				if(degree[end]==0) {
					degree[end]++;
				} else {
					flag=false;
				}
			}
//			edges[start].push_back(end);
//			max1=max(max(start,end),max1);
//			min1=min(min(start,end),min1);
		}

		//检测图是否有环
//		for(int i=min1; i<=max1; i++) {
//			runDFS(flag,i);
//		}

		//检测入度小于2
//		for(int i=min1; i<=max1; i++) {
//			if(flag)break;
//			for(int j=0; j<edges[i].size(); i++) {
//				int visit=edges[i][j];
//				if(degree[visit]==0) {
//					degree[visit]++;
//				} else {
//					//入度大于2
//					flag=true;
//					break;
//				}
//			}
//		}


		if((nodes.size()-1)!=edge) {
			flag=false;
		}

		if(!flag) {
			cout<<"Case "<<c<<" is not a tree."<<endl;
		} else {
			cout<<"Case "<<c<<" is a tree."<<endl;
		}


	}
	return 0;
}
