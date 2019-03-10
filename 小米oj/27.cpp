#include <bits/stdc++.h> 
#include<cstring>
#include<vector>
#include<sstream>
#include<algorithm>
#define MAX 0x3f3f3f3f
#define MIN -1
using namespace std;

//石头收藏家 
int dp[10000];
struct Item{
	int value;
	int weight;
};

bool cmp(Item i1,Item i2){
	return i1.value>i2.value;
}

int main()
{
    int max_carry;
	while(cin>>max_carry){
		memset(dp,0,sizeof(dp));
		vector<Item> items;
		string line;
		//init
		cin.ignore();
		getline(cin,line);
		istringstream ss(line);
		int weight;
		while(ss>>weight){
			Item item;
			item.weight=weight;
			items.push_back(item);
		}
		
//		cin.ignore();
		for(int i=0;i<items.size();i++){
			cin>>items[i].value;
		}
		
		sort(items.begin(),items.end(),cmp);
		
		dp[0]=0;
		for(int i=0;i<items.size();i++){
			for(int j=max_carry;j>=items[i].weight;j--){
				if(dp[j]<dp[j-items[i].weight]+items[i].value){
					dp[j]=dp[j-items[i].weight]+items[i].value;
				}
			}
		}
		
		cout<<dp[max_carry]<<endl;
		
	} 
    
    return 0;
}
