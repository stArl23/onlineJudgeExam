#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct mouse{
	int weight;
	string color;
};

bool cmp(mouse &m1,mouse &m2){
	return m1.weight>m2.weight;
}

int main(){
	int num;
	while(cin>>num){
		vector<mouse> mouses;
		for(int i=0;i<num;i++){
			mouse m;
			int weight;
			string color;
			cin>>weight>>color;
			m.weight=weight;
			m.color=color;
			mouses.push_back(m);
		}
		sort(mouses.begin(),mouses.end(),cmp);
		
		for(int i=0;i<mouses.size();i++){
			mouse m=mouses[i];
			cout<<m.color<<endl;
		}
	}
	return 0;
}
