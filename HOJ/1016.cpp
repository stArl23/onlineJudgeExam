#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int nums[21];



bool is_prime(int n){
	if(n<2)return false;
	if(n==2)return true;
	if(n%2==0)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}

void search(int size,vector<int> &res){
	if(res.size()>size){
		return;
	}
	
	if(res.size()==size){
		//注意序列最后的空格 
		for(int i=0;i<(res.size()-1);i++){
			cout<<res[i]<<" ";
		}
		cout<<res.back()<<endl;
		return;
	}
	
	for(int i=2;i<=size;i++){
		if(nums[i]==0){
			int t=0,t1=0;
			if(res.size()==(size-1)){
				t=i+res.back();
				t1=i+res[0];
				if(!is_prime(t)||!is_prime(t1))
					continue;
			}else{
				t=i+res.back();
				if(!is_prime(t))
					continue;
			}
			nums[i]=1;
			res.push_back(i);
			search(size,res);
			res.pop_back();
			nums[i]=0;
		}
	}
	return ;
	
}

int main(){
	int n;
	int t=0;
	while(cin>>n){
		t++;
		memset(nums,0,sizeof(nums));
		vector<int> res;
		cout<<"Case "<<t<<":"<<endl;
		nums[1]=1;
		res.push_back(1);
		search(n,res);
		cout<<endl;
	}
	return 0;
}
