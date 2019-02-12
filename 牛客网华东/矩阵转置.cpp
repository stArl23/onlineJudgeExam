#include<iostream>
#include<algorithm>
using namespace std;

int nums[100][100];
int main(){
	
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>nums[i][j];
			}
		}
		
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				swap(nums[i][j],nums[j][i]);
			}
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<nums[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
