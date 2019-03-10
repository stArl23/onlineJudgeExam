#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool cmp(int n1,int n2){
	return n1>n2;
}

int nums[11][11];
int main(){
	int n;
	while(cin>>n){
		vector<int> sums;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>nums[i][j];
			}
		}
		
		for(int i=0;i<n;i++){
			int sum1=0,sum2=0;
			for(int j=0;j<n;j++){
				sum1+=nums[i][j];
				sum2+=nums[j][i];
			}
			sums.push_back(sum1);
			sums.push_back(sum2);
		}
		
		int sum3=0;
		for(int i=0;i<n;i++){
			sum3+=nums[i][i]; 
		}
		sums.push_back(sum3);
		sum3=0;
		for(int i=n-1;i>=0;i--){
			sum3+=nums[i][n-1-i]; 
		}
		sums.push_back(sum3);
		
		sort(sums.begin(),sums.end(),cmp);
		
		for(int i=0;i<sums.size();i++){
			if(i==(sums.size()-1)){
				cout<<sums[i]<<endl;
			}else{
				cout<<sums[i]<<" ";
			}
		}
	} 
	return 0;
}
