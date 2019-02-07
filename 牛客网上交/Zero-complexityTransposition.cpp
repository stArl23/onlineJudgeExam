#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	long long temp;
	while(cin>>n){
		vector<long long> res;
		for(int i=0;i<n;i++){
			cin>>temp;
			res.push_back(temp);
		}
		
		reverse(res.begin(),res.end());
		
		for(int i=0;i<n;i++){
			cout<<res[i]<<" ";
		}
		
		cout<<endl;
		
	}
	return 0; 
} 
