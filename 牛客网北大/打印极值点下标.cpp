#include<iostream>
#include<vector>
using namespace std;

int main(){
	int k,temp;
	while(cin>>k){
		vector<int> v,res;
		for(int i=0;i<k;i++){
			cin>>temp;
			v.push_back(temp);
		}
		
		if(v[0]!=v[1]){
			res.push_back(0);
		}
		for(int i=1;i<k-1;i++){
			if(v[i]>v[i-1]&&v[i]>v[i+1]){
				res.push_back(i);
			}
			if(v[i]<v[i-1]&&v[i]<v[i+1]){
				res.push_back(i);
			}
		}
		if(v[v.size()-1]!=v[v.size()-2]){
			res.push_back(v.size()-1);
		}
		
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
