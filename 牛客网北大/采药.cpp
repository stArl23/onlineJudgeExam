#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct item{
	int weight;
	int value;	
};

bool cmp(item i1,item i2){
	return i1.value>i2.value;
}

int main(){
	int t,m;
	int dp[1001];
	while(cin>>t>>m){
		vector<item> items;
		for(int i=0;i<=t;i++){
			dp[i]=0;
		}
		for(int i=0;i<m;i++){
			item it;
			cin>>it.weight>>it.value;
			items.push_back(it);
		}
		
		sort(items.begin(),items.end(),cmp);
		
		for(int i=0;i<items.size();i++){
			for(int j=t;j>=items[i].weight;j--){
				dp[j]=max(dp[j],dp[j-items[i].weight]+items[i].value);
			}
		}
		
		cout<<dp[t]<<endl;
	}
	return 0;
}
