#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int gcd(int a,int b){
	return b!=0?gcd(b,a%b):a;
}

int main(){
	int num;
	while(cin>>num){
		vector<int> v; 
		for(int i=0;i<num;i++){
			int t;
			cin>>t;
			v.push_back(t);
		}
		sort(v.begin(),v.end());
		
		int n=0;
		for(int i=0;i<v.size();i++){
			for(int j=i+1;j<v.size();j++){
				if(gcd(v[j],v[i])==1)n++;
			}
		}
		
		cout<<n<<endl;
	}
	return 0;
} 
