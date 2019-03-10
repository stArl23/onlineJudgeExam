#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cstdio>
using namespace std;

int parents[101];
int route;
int n,q;

struct Edge {
	int x,y;
	int value;
};

bool cmp(Edge e1,Edge e2) {
	return e1.value<e2.value;
}

int findRoot(int i) {
	if(parents[i]==-1)
		return i;
	else
		return findRoot(parents[i]);
}

void merge(int a1,int a2,int size) {
	int p_a1=findRoot(a1);
	int p_a2=findRoot(a2);

	if(p_a1>p_a2) {
		swap(p_a1,p_a2);
		swap(a1,a2);
	}

	for(int i=1; i<=size; i++) {
		if(findRoot(i)==p_a2) {
			parents[i]=p_a1;
		}
	}
}

int main() {
	while(scanf("%d",&n)!=EOF) {
		//cin>>n;
		vector<Edge> edges;
		memset(parents,-1,sizeof(parents));
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				scanf("%d",&route);
				if(i<j) {
					Edge edge;
					edge.x=i;
					edge.y=j;
					edge.value=route;
					edges.push_back(edge);
				}
			}
		}
		
		sort(edges.begin(),edges.end(),cmp);
		scanf("%d",&q);
		int t=0;
		for(int i=0; i<q; i++) {
			int start,end;
			scanf("%d%d",&start,&end);
			merge(start,end,n);
			t++;
		}

		
		int sum=0;
		for(int i=0; i<edges.size()&&t<n; i++) {
			if(findRoot(edges[i].x)!=findRoot(edges[i].y)) {
				merge(edges[i].x,edges[i].y,n);
				sum+=edges[i].value;
				t++;
			}
		}

		printf("%d\n",sum);
	}
	return 0;
}
