#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct Record{
	int mark;
	string name;	
}; 

struct Greater{
	bool operator()(Record a,Record b){
		return a.mark>b.mark;
	}
}a_greater;

struct Smaller{
	bool operator()(Record a,Record b){
		return a.mark<b.mark;
	}
}a_smaller;

int main(){	
	int num,type;
	while(cin>>num>>type) {
		string name="";
		int mark;
		vector<Record> records;
		while(num--) {
			cin>>name>>mark;
			Record record;
			record.mark=mark;
			record.name=name;
			records.push_back(record);
		}

		if(type==0) {
			stable_sort(records.begin(),records.end(),a_greater);
		} else {
			stable_sort(records.begin(),records.end(),a_smaller);
		}

		for(int i=0; i<records.size(); i++) {
			cout<<records[i].name<<" "<<records[i].mark<<endl;
		}
	}
	
	return 0;
	
}
