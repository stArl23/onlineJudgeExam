#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int dp[41];
	int num,temp;
	vector<int> v;
	while(cin>>num){
		for(int i=0;i<num;i++){
			cin>>temp;
			v.push_back(temp);
		}
		
		for(int i=0;i<=40;i++)
			dp[i]=0;
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			for(int j=40;j>=v[i];j--){
				dp[j]+=dp[j-v[i]];
			}
			//当j=v[i]时有一种放置方法 
			dp[v[i]]++;
		}
		
//		for(int i=0;i<=40;i++)
//			cout<<dp[i]<<endl; 
		
		cout<<dp[40]<<endl;
	}
	return 0;
}
