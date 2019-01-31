#include<iostream>
#include<cstring>

using namespace std;

int arr[100][100],dp[10];


int maxarr(int arr[],int n){
	int f=arr[0];
    int result=f;
	for(int i=1;i<n;i++){
		f=max(arr[i]+f,arr[i]);
		result=max(f,result);
	}
	return result;
}

int main(){
	int num;
	while(cin>>num){
		for(int i=0;i<num;i++){
			for(int j=0;j<num;j++){
				cin>>arr[i][j];
			}
		}
		
		int max=0,maxsubarr=0;
		for(int i=0;i<num;i++){
			memset(dp,0,sizeof(dp));
			for(int j=i;j<num;j++){
				for(int k=0;k<num;k++){
					dp[k]+=arr[j][k];
				}
				maxsubarr=maxarr(dp,num);
				if(maxsubarr>max)max=maxsubarr;
			}
		}
		
		cout<<max<<endl;	
	}
	return 0;
}
