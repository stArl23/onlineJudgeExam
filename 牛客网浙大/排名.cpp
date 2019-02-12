#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Record {
	string name;
	int score;
};

bool cmp(Record r1,Record r2) {
	if(r1.score==r2.score) {
		return r1.name<r2.name;
	} else {
		return r1.score>r2.score;
	}
}

int main() {
	int s_num,M,score_line,q_mark,solved_q,q_num;

	while(cin>>s_num) {
		vector<int> questions;
		vector<Record> records;
		if(s_num==0)break;
		cin>>M>>score_line;
		for(int i=0; i<M; i++) {
			cin>>q_mark;
			questions.push_back(q_mark);
		}

		for(int i=0; i<s_num; i++) {
			Record record;
			int score=0,q_;
			cin>>record.name>>q_num;
			cin.ignore();
			for(int j=0; j<q_num; j++) {
				cin>>solved_q;
				score+=questions[solved_q-1];
			}
			record.score=score;
			records.push_back(record);
		}

		sort(records.begin(),records.end(),cmp);

		int r_num=0;
		for(int i=0; i<records.size(); i++) {
			if(records[i].score<score_line) {
				break;
			}
			r_num++;
		}
		
		cout<<r_num<<endl;
		for(int i=0; i<records.size(); i++) {
			if(records[i].score<score_line) {
				break;
			}
			cout<<records[i].name<<" "<<records[i].score<<endl;
		}

		

	}
	return 0;
}
