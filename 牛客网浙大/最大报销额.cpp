#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}

vector<int> prices;
int main() {
	double total,price;
	char type;
	int n,num;
	while(scanf("%lf%d",&total,&n)!=EOF) {
		if(n==0)return 0;
		prices.clear();
		
		for(int k=0; k<n; k++) {
			//cout<<k<<endl;
			scanf("%d",&num);
			double sum=0;
			bool flag=true;
			//cout<<num<<endl;
			for(int j=0; j<num; j++) {
				string input;
				cin>>input;
				sscanf(input.c_str(),"%c:%lf",&type,&price);
				//printf("j=%d %c %lf\n",j,type,price);
				if((type=='A'||type=='B'||type=='C')&&price<=600.0){
					sum+=price;
				}else{
					flag=false; 
					continue;
				}
			}
			//处理两位小数 
			if(flag&&sum<=1000.0){
				prices.push_back((int)(sum*100));
			}
		}
		
		//cout<<"out"<<endl;
		sort(prices.begin(),prices.end(),cmp);
		
		int total_size=(int)(total*100);
		vector<int> dp(total_size+1);
		for(int i=0;i<=total_size;i++){
			dp[i]=0;
		}
			
		
		for(int i=0;i<prices.size();i++){
			for(int j=total_size;j>=prices[i];j--){
				dp[j]=max(dp[j],dp[j-prices[i]]+prices[i]);
			}
		}
		
		int result=0;
		for(int i=total_size;i>=0;i--){
			if(dp[i]>0){
				result=dp[i];
				break;
			}
		}
		
		//cout<<result<<endl;
		double r=result/100.0;
		printf("%.2lf\n",r);
	}
	return 0;
}
