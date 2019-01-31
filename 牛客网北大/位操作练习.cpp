#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> to_two(int x){
	vector<int> res;
	for(int i=0;i<16;i++){
		res.push_back(x%2);
		x/=2;
	}
	reverse(res.begin(),res.end());
	return res;
	
}

bool equal(vector<int> &a1,vector<int> &a2){
	for(int i=0;i<16;i++){
		if(a1[i]!=a2[i])return false;
	}	
	return true;
}

vector<int> left_ship_circle_1(vector<int> &a1){
	int i=a1[0];
	a1.push_back(i);
	a1.erase(a1.begin());
	return a1;
}

void print(vector<int> &a){
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n1,n2;
	while(cin>>n1>>n2){
		vector<int> v1,v2;
		v1=to_two(n1);
		v2=to_two(n2);
		int flag=0;
		for(int i=0;i<16;i++){
			if(equal(v1,v2)){
				flag=1;
				break;
			}
			v1=left_ship_circle_1(v1);
		}
		
		if(flag){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
