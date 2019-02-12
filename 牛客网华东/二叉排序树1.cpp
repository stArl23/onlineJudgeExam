#include<iostream>
#include<cstring>
using namespace std;

int nodes[1000000];

int node_insert(int value){
	int parent=-1,root=1;
	while(nodes[root]!=-1){
		if(nodes[root]<value){
			parent=root;
			root=root*2+1;
		}else{
			parent=root;
			root*=2;
		}
	}
	nodes[root]=value;
	if(parent==-1)
		return parent;
	else
		return nodes[parent];
}
int main(){
	int num,temp;
	while(cin>>num){
		memset(nodes,-1,sizeof(nodes));
		for(int i=0;i<num;i++){
			cin>>temp;
			cout<<node_insert(temp)<<endl;
		}
	}
	return 0;
}
