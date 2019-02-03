#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct record{
	string name;
	int score;
	int age;
};

bool cmp(record r1,record r2){
	if(r1.score>r2.score){
		return false;
	}else if(r1.score==r2.score){
		if(r1.name==r2.name){
			return r1.age<r2.age;
		}else{
			return r1.name<r2.name;
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
			cin>>r.name>>r.age>>r.score;
			records.push_back(r);
		}
		
		sort(records.begin(),records.end(),cmp);
		
		for(int i=0;i<records.size();i++){
			record r=records[i];
			cout<<r.name<<" "<<r.age<<" "<<r.score<<endl;
		}
	}
	return 0;
}
