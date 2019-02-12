#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,temp,x;
	while(cin>>n){
		vector<int> res;
		for(int i=0;i<n;i++){
			cin>>temp;
			res.push_back(temp);
		}
		cin>>x;
		
		int index=-1;
		for(int i=0;i<res.size();i++){
			if(x==res[i]){
				index=i;
			}
		}
		
		cout<<index<<endl;
		
		
	}
	return 0;
}
