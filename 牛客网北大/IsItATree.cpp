#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int graph[10001][10001];

void runDFS(set<int> starts,set<int> is_visited,int start,int end,int& flag){
	while(starts==is_visited&&!flag){
		for(int i=0;i<starts.size();i++){
			int s=starts[i];
			if(is_visited.count(s)>0){
				continue;
			}else{
				is_visited.insert(s);
			}
			for(int j=start;j<=end;j++){
				if(graph[s][j]==1){
					if(is_visited.count(j)==0){
						is_visited.insert(j);
						s=j;
					}
				}
			}
		}
	}
}

int main(){
	int start,end;
	int c=0;
	while(cin>>start>>end){
		int max1=0,flag=0,min1=10001;
		set<int> starts;
		if(start==-1&&end==-1)break;
		//init
		for(int i=0;i<=10000;i++){
			for(int j=0;j<=10000;j++){
				graph[i][j]=0;
			}
		}
		while(cin>>start>>end){
			if(start==0&&end==0){
				c++;
				break;
			}
			
			if(starts.count(start)==0){
				starts.insert(start);
			}
			
			//1个树节点没有两个双亲 
			if(graph[start][end]<2){
				graph[start][end]++;
				flag=1;
				break;
				
			}	
			
			max1=max(start,end);
			min1=min(start,end);
		}
		
		
		
		if(flag){
			cout<<"Case "<<c<<" is not a tree"<<endl;
		}else{
			cout<<"Case "<<c<<" is a tree"<<endl;
		} 
		
		
		
		
		
		
	}
	return 0;
}
