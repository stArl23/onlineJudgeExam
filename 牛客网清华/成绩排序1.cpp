#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Record{
	int s_num;
	int score;	
};

bool cmp(Record r1,Record r2){
	if(r1.score<r2.score)return true;
	else if(r1.score>r2.score)return false;
	else{
		return r1.s_num<r2.s_num;
	}
}


int main(){
	int num;
	while(cin>>num){
		vector<Record> rs;
		while(num--){
			int p,q;
			cin>>p>>q;
			Record r;
			r.s_num=p;
			r.score=q;
			rs.push_back(r);
		}
		stable_sort(rs.begin(),rs.end(),cmp);
		for(int i=0;i<rs.size();i++){
			cout<<rs[i].s_num<<" "<<rs[i].score<<endl;
		} 
	}
	return 0;
} 
