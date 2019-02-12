#include<iostream>
#include<algorithm> 
#include<vector>

using namespace std;

struct Record{
	string num;
	string name;
	int score;
};

bool cmp1(Record r1,Record r2){
	return r1.num<r2.num;
}

bool cmp2(Record r1,Record r2){
	return r1.name<=r2.name;
}

bool cmp3(Record r1,Record r2){
	if(r1.score==r2.score||r1.name==r2.name){
		return r1.num<r2.num;
	}else{
		return r1.score<r2.score;
	}
}

int main(){
	int n,c;
	while(cin>>n>>c){
		vector<Record> records;
		for(int i=0;i<n;i++){
			Record record;
			cin>>record.num>>record.name>>record.score;
			records.push_back(record);
		}
		
		switch(c){
			case 1:
				sort(records.begin(),records.end(),cmp1);
				break;
			case 2:
				sort(records.begin(),records.end(),cmp2);
				break;
			case 3:
				sort(records.begin(),records.end(),cmp3);
				break;
		}
		
		cout<<"Case:"<<endl;
		for(int i=0;i<records.size();i++){
			cout<<records[i].num<<" "<<records[i].name<<" "<<records[i].score<<endl;
		}
		
	}
	return 0;
}
