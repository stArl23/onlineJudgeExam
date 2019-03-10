#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
struct Node{
	int value;
	struct Node *next;
}; 

struct Head{
	struct Node *head;
};

bool is_visited[100];
int num,n;

int main(){
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>n;
		memset(is_visited,false,sizeof(is_visited));
		vector<int> nums;
		Head *head=new Head;
		Node *node=new Node;
		node->value=1;
		head->head=node;
		for(int j=2;j<=n;j++){
			Node *node1=new Node;
			node1->value=j;
			node->next=node1;
			node=node1;
		}	
		
		node->next=head->head;
		
		int j=0,t=0;
		node=head->head;
		while(j<n){
			if(!is_visited[node->value]){
				t++;
				if(t==3){
					is_visited[node->value]=true;
					nums.push_back(node->value);
					t=0;
					j++;
				}
			}
			node=node->next;
		}
		
		for(int j=0;j<nums.size();j++){
			if(j==(nums.size()-1)){
				cout<<nums[j]<<endl;
			}else{
				cout<<nums[j]<<" ";
			}
		}
		 
	}
	
	
	return 0;
}
