#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int x,int y){
	return x>y;
}
int main(){
	int arr[10];
	while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7]>>arr[8]>>arr[9]){
		vector<int> odds,evens;
		for(int i=0;i<10;i++){
			if(arr[i]%2==1){
				odds.push_back(arr[i]);
			}else{
				evens.push_back(arr[i]);
			}
		}	
		
		sort(odds.begin(),odds.end(),cmp);
		sort(evens.begin(),evens.end());	
		
		for(int i=0;i<odds.size();i++){
			cout<<odds[i]<<" ";
		}
		
		for(int i=0;i<evens.size();i++){
			cout<<evens[i]<<" ";
		}
		
		cout<<endl;
	}
	return 0; 
} 
