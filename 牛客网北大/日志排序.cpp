#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<sstream>

using namespace std;

struct Record{
	string raw;
	string name;
	string date;
	string time;
	double cost_time;
};

bool cmp(Record &a,Record &b){
	if(a.cost_time<b.cost_time){
		return true;
	}else if(a.cost_time>b.cost_time){
		return false;
	}else{
		if(a.date<b.date){
			return true;
		}else if(a.date>b.date){
			return false;
		}else{
			if(a.time<b.time){
				return true;
			}else{
				return false;
			}
		}
	}
}

int main(){
	string name,date,time,cost_time,temp;
	vector<Record> records;
	while(getline(cin,temp)&&temp.length()!=0){
		Record r;
		istringstream is(temp);
		r.raw=temp;
		is>>r.name;
		is>>r.date;
		is>>r.time;
		is>>cost_time;
		double t=atof(cost_time.substr(0,cost_time.size()-3).c_str());
		//cout<<t<<endl;
		r.cost_time=t;
		records.push_back(r);
	}
	
	sort(records.begin(),records.end(),cmp);
	
	for(int i=0;i<records.size();i++){
		Record r=records[i];
		cout<<r.raw<<endl;
	}
	return 0;
}
