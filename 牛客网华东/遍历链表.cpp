#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

struct Node{
	struct Node *next;
	int value;
};

int main() {
	int n;

	while(cin>>n&&n>0) {
		int t;
		vector<int> res;
		for(int i=0; i<n; i++) {
			cin>>t;
			res.push_back(t);
		}
		
		sort(res.begin(),res.end());
		
//		for(int i=0;i<res.size();i++){
//			cout<<res[i]<<" ";
//		}
//		cout<<endl;

		Node *head=new Node,*prev=new Node;
		head->value=res[0];
		head->next=NULL;
		prev=head;
		for(int i=1;i<res.size();i++){
			Node *now=new Node;
			now->value=res[i];
			now->next=NULL;
			prev->next=now;
			prev=now;
		}
		
		Node *now=head;
		while(now!=NULL){
			cout<<now->value<<" ";
			now=now->next;
		}
		cout<<endl;
	}

	
	return 0;
}
