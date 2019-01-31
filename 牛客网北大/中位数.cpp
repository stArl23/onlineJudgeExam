#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int num;
	while(cin>>num&&num!=0){
		int t;
		vector<int> v;
		for(int i=0;i<num;i++){
			cin>>t; 
			v.push_back(t);
		}
		sort(v.begin(),v.end());
		
		if(num%2==1){
			int mid=num/2;
			cout<<v[mid]<<endl;
		}else{
			int mid=num/2,res=(v[mid]+v[mid-1])/2;
			cout<<res<<endl;	
		}
		
	} 
	
	
	return 0;
}
