#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���벻�չ�2��31�Σ������������ 
vector<long long> tenToM(long long num,long long m){
	vector<long long> res;
	while(num>0){
		res.push_back(num%m);
		num/=m;
	}
	//ע��0 
	if(res.size()==0){
		res.push_back(0);
	}
	reverse(res.begin(),res.end());
	return res;
}

int main(){
	long long n1,n2,m;
	while(cin>>m){
		if(m==0)break;
		cin>>n1>>n2;
		vector<long long> res=tenToM(n1+n2,m);
		for(int i=0;i<res.size();i++)
			cout<<res[i];
		cout<<endl;
	}
	return 0;
}
