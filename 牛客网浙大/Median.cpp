#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	
	int n1,n2,temp;
	while(cin>>n1){
		vector<int> res;
		for(int i=0;i<n1;i++){
			cin>>temp;
			res.push_back(temp);
		}
		
		cin>>n2;
		for(int i=0;i<n2;i++){
			cin>>temp;
			res.push_back(temp);
		}
		
		sort(res.begin(),res.end()); 
		cout<<res[(res.size()-1)/2]<<endl;
	}
	return 0;
} 
