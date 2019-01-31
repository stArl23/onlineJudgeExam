#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int parents[27];
struct Edge{
	char start;
	char end;
	int cost;
};

int findRoot(int i){
	if(parents[i]!=-1)
		return findRoot(parents[i]);
	else
		return i;
}

void mergeSet(char a1,char a2,int num){
	int r1=a1-'A'+1,r2=a2-'A'+1;
	int from_root,to_root;
	if(r1<r2){
		from_root=findRoot(r2);
		to_root=findRoot(r1);
	}else{
		from_root=findRoot(r1);
		to_root=findRoot(r2);
	}
	
	for(int i=1;i<=num;i++){
		int from=findRoot(i);
		if(from==from_root){
			parents[i]=to_root; 
		}
	}
}

bool cmp(Edge a,Edge b){
	return a.cost<b.cost;	
}

int setNum(int num){
	int n=0;
	for(int i=1;i<=num;i++){
		if(parents[i]==-1)n++;
	}
	
	return n;
}

int main(){
	int num;
	while(cin>>num&&num!=0){
		for(int i=1;i<=num;i++){
			parents[i]=-1;
		}
		
		vector<Edge> edges;
		for(int i=0;i<num-1;i++){
			char start,end;
			int r_num,cost;
			cin>>start>>r_num;
			for(int j=0;j<r_num;j++){
				Edge edge;
				edge.start=start;
				cin>>edge.end>>edge.cost;
				edges.push_back(edge);	
			}
		}
		
		sort(edges.begin(),edges.end(),cmp);
		int sum=0;
		for(int i=0;i<edges.size();i++){
			if(setNum(num)==1){
				break;
			}
			Edge edge=edges[i];
			int from =edge.start-'A'+1,to=edge.end-'A'+1;
			if(findRoot(from)!=findRoot(to)){
				sum+=edge.cost;
				mergeSet(edge.start,edge.end,num);
			}
		}
		
		cout<<sum<<endl;
	}
	return 0; 
} 
