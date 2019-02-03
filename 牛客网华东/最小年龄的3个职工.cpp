#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct record{
	string name;
	int num;
	int age;
};

bool cmp(record r1,record r2){
	if(r1.age>r2.age){
		return false;
	}else if(r1.age==r2.age){
		if(r1.num==r2.num){
			return r1.name<r2.name;
		}else{
			return r1.num<r2.num;
		} 
	}else{
		return true;
	}
} 

int main(){
	int n,n1,n2;
	string input;
	while(cin>>n&&n>0){
		vector<record> records;
		for(int i=0;i<n;i++){
			record r;
			cin>>r.num>>r.name>>r.age;
			records.push_back(r);
		}
		
		sort(records.begin(),records.end(),cmp);
		
		int l=((records.size()<3)?records.size():3);
		for(int i=0;i<l;i++){
			record r=records[i];
			cout<<r.num<<" "<<r.name<<" "<<r.age<<endl;
		}
	}
	return 0;
}
