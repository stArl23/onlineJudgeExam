#include<iostream>
#include<algorithm>
#include<vector>
#define MAX_KIND 21
#define MAX_WEIGHT 101
using namespace std;
//±³°üÎÊÌâ

struct Item {
	int weight;
	int num;
};

int dp[MAX_KIND][MAX_WEIGHT];

int main() {
	int total,num;
	while(cin>>total>>num) {
		//init
		vector<Item> items;
		while(num--) {
			int index=1,weight;
			cin>>weight;
			if(!items.empty()) {
				Item item=items[items.size()-1];
				if(item.weight==weight) {
					items[items.size()-1].num++;
				} else {
					Item item;
					item.num=1;
					item.weight=weight;
					items.push_back(item);
				}
			} else {
				Item item;
				item.num=1;
				item.weight=weight;
				items.push_back(item);
			}
		}
		
//		for(int i=0;i<items.size();i++)
//			cout<<items[i].weight<<" "<<items[i].num<<endl;
		
	
		for(int i=0; i<=MAX_KIND; i++) {
			for(int j=0; j<=MAX_WEIGHT; j++) {
				if(j==0){
					dp[i][j]=0;
				}else{
					dp[i][j]=MAX_KIND;
				}
			}
		}
		
		Item item=items[items.size()-1];
		for(int i=1;i<=items.size();i++){
			for(int j=1;j<=total;j++){
				for(int k=0;k<=items[i-1].num;k++){
					if(j>=k*items[i-1].weight){
						dp[i][j]=min(dp[i][j],dp[i-1][j-k*items[i-1].weight]+k); 
					}
				} 
			}
		}
		
//		for(int i=1;i<=items.size();i++){
//			for(int j=1;j<=total;j++){
//				cout<<dp[i][j]<<" ";
//			}
//			cout<<endl;
//		}

		if(dp[items.size()][total]==MAX_KIND){
			cout<<"0"<<endl;
		}else{
			cout<<dp[items.size()][total]<<endl;
		}



	}
	return 0;
}
