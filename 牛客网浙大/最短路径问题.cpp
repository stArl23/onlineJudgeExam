#include<iostream>
#include<cstdio>
#include<vector>
#define INF 99999
using namespace std;


int dist[1001];
int cost[1001];
bool is_visited[1001];

struct Edge{
	int next;
	int cost;
	int weight;
};
int main() {
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF) {
		if(n==0&&m==0)break;
		int start,end;
		vector<Edge> edges[1001];
		for(int i=1; i<=n; i++) {
			dist[i]=INF;
			cost[i]=INF;
			is_visited[i]=false;
		}


		for(int i=0; i<m; i++) {
			int a,b,d,p;
			//
			scanf("%d %d %d %d",&a,&b,&d,&p);
			Edge temp;
			temp.weight=d;
			temp.next=b;
			temp.cost=p;
			edges[a].push_back(temp);
			temp.next=a;
			edges[b].push_back(temp);
		}
		scanf("%d %d",&start,&end);
		dist[start]=0;
		cost[start]=0;
		is_visited[start]=true;
		int newP=start;
		
		for(int i=1;i<n;i++){
			for(int j=0;j<edges[newP].size();j++){
				int next=edges[newP][j].next;
				int w=edges[newP][j].weight;
				int co=edges[newP][j].cost;
				if(is_visited[next])continue;
				if(dist[next]==INF||dist[next]>dist[newP]+w
				||dist[next]==dist[newP]+w
				&&cost[next]>cost[newP]+co){
					//cout<<dist[newP]<<" "<<weight[newP][j]<<endl;
					dist[next]=dist[newP]+w;
					cost[next]=cost[newP]+co;
				}
			}
			
			int min=99999;//找出最小点
			for(int j=1;j<=n;j++){
				if(is_visited[j])continue;
				if(dist[j]==INF)continue;
				if(dist[j]<min){
					min=dist[j];
					newP=j;
				}
			} 
			is_visited[newP]=true;
		}
		
		printf("%d %d\n",dist[end],cost[end]);
		//cout<<dist[end]<<" "<<cost[end]<<endl;

	}
	return 0;
}
