#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;

struct Record {
	int bg;
	int cost_time;
	int end_time;
};


bool cmp(Record r1,Record r2){
	return r1.end_time<r2.end_time;
}

int dp[10000];
int main() {
	int n,max_time;
	//0-1背包问题 
	while(scanf("%d",&n)!=EOF) {
		if(n<0)break;
		vector<Record> records;
		memset(dp,0,sizeof(dp));
		for(int i=0; i<n; i++) {
			Record record;
			scanf("%d%d%d",&record.bg,&record.cost_time,&record.end_time);
			records.push_back(record);
		}
		
		//结束时间需要按结束时间排序 
		sort(records.begin(),records.end(),cmp); 
		
		int max1=0;
		for(int i=0;i<records.size();i++){
			for(int j=records[i].end_time;j>=records[i].cost_time;j--){
				dp[j]=max(dp[j-records[i].cost_time]+records[i].bg,dp[j]);
				if(max1<dp[j]){
					max1=dp[j];
				}
			}
		}
		
	
		printf("%d\n",max1);
	}
	return 0;
}
