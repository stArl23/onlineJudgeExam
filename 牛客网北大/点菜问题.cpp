#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct item{
	int price;	
	int score;
};

bool cmp(item i1,item i2){
	return i1.price>i2.price;
}

int main(){
	int c,n;
	int dp[1001];
	while(cin>>c>>n){
		vector<item> items;
		for(int i=0;i<=1000;i++){
			dp[i]=0;
		}
		//dp[0]=0;
		
		item it;
		for(int i=0;i<n;i++){
			cin>>it.price>>it.score;
			items.push_back(it);
		}
		
		sort(items.begin(),items.end(),cmp);
		
		for(int i=0;i<items.size();i++){
			for(int j=c;j>=items[i].price;j--){
				dp[j]=max(dp[j],dp[j-items[i].price]+items[i].score);
			}
		}
		
		cout<<dp[c]<<endl;
	}
	return 0;
} 
