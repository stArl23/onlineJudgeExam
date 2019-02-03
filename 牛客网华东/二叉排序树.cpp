#include<iostream>
#include<cstring>
using namespace std;

int tree[100000];

void preOrder(int root){
	if(tree[root]!=-1){
		cout<<tree[root]<<" ";
		preOrder(root*2);
		preOrder(root*2+1);
	}
}

void inOrder(int root){
	if(tree[root]!=-1){
		inOrder(root*2);
		cout<<tree[root]<<" ";
		inOrder(root*2+1);
	}
}

void behindOrder(int root){
	if(tree[root]!=-1){
		behindOrder(root*2);
		behindOrder(root*2+1);
		cout<<tree[root]<<" ";
	}
}

int main(){
	int num,temp;
	while(cin>>num){
		memset(tree,-1,sizeof(tree));
		for(int i=0;i<num;i++){
			int root=1;
			cin>>temp;
			while(tree[root]!=-1){
				if(tree[root]==temp){
					root=-1;
					break;
				}else if(tree[root]>temp){
					root*=2;
				}else{
					root=root*2+1;
				}
			}
			
			if(root!=-1){
				tree[root]=temp;
			}
		}
		
		preOrder(1);
		cout<<endl;
		inOrder(1);
		cout<<endl;
		behindOrder(1);
		cout<<endl;	
	}
	return 0;
}
