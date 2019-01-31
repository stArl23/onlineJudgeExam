#include<iostream>
#include<vector>
using namespace std;
int parents[1001];

struct Edge {
	int start;
	int end;
};
int setNum(int num) {
	int n=0;
	for(int i=1; i<=num; i++) {
		if(parents[i]==-1)n++;
	}

	return n;
}

int findRoot(int i) {
	if(parents[i]!=-1)
		return findRoot(parents[i]);
	else
		return i;
}
void mergeSet(int a1,int a2,int num) {
	int from_root,to_root;
	if(a1<a2) {
		from_root=findRoot(a2);
		to_root=findRoot(a1);
	} else {
		from_root=findRoot(a1);
		to_root=findRoot(a2);
	}

	for(int i=1; i<=num; i++) {
		int from=findRoot(i);
		if(from==from_root) {
			parents[i]=to_root;
		}
	}
}

int main() {
	int n,m;
	while(cin>>n>>m&&n!=0) {
		for(int i=1; i<=n; i++) {
			parents[i]=-1;
		}

		vector<Edge> edges;
		for(int i=0; i<m; i++) {
			Edge edge;
			cin>>edge.start>>edge.end;
			edges.push_back(edge);
		}

		bool flag=false;
		for(int i=0; i<edges.size(); i++) {
			if(setNum(n)==1) {
				flag=true;
				break;
			}

			Edge edge=edges[i];
			if(findRoot(edge.start)!=findRoot(edge.end)) {
				mergeSet(edge.start,edge.end,n);
			}
		}

		if(setNum(n)==1) {
			flag=true;
		}
		if(flag) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}


	return 0;
}

