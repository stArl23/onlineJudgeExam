#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;


int parents[101];

struct Node {
	double x;
	double y;
};

struct Edge{
	int start;
	int end;
	double value;
};

bool cmp(Edge e1,Edge e2){
	return e1.value<e2.value;
}

int findRoot(int i){
	if(parents[i]==-1)
		return i;
	else 
		return findRoot(parents[i]);
}

void merge(int a1,int a2,int size){
	int p_a1=findRoot(a1);
	int p_a2=findRoot(a2);
	
	if(p_a1>p_a2){
		swap(p_a1,p_a2);
		swap(a1,a2);
	}
	
	for(int i=1;i<=size;i++){
		if(findRoot(i)==p_a2){
			parents[i]=p_a1;
		}
	}
}

int main() {
	int n=0;
	while(scanf("%d",&n)!=EOF) {
		memset(parents,-1,sizeof(parents));
		vector<Node> nodes;
		vector<Edge> edges;
		for(int i=0; i<n; i++) {
			Node node;
			scanf("%lf%lf",&node.x,&node.y);
			nodes.push_back(node);
			parents[i]=-1;
		}
		
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				double r=(nodes[i].x-nodes[j].x)*(nodes[i].x-nodes[j].x)+(nodes[i].y-nodes[j].y)*(nodes[i].y-nodes[j].y);
				r=sqrt(r);
				Edge edge;
				edge.start=i;
				edge.end=j;
				edge.value=r;
				edges.push_back(edge);
			}
		}
		
		sort(edges.begin(),edges.end(),cmp);

		int time=0;
		double sum=0;
		for(int i=0;i<edges.size()&&time<n;i++){
			int p1=edges[i].start;
			int p2=edges[i].end;
			if(findRoot(p1)!=findRoot(p2)){
				sum+=edges[i].value;
				time++;
				merge(p1,p2,n);
			}
		}
		
		printf("%.2lf\n",sum);
	}
	return 0;
}
