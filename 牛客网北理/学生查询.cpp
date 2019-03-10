#include<iostream>
#include<map>
using namespace std;

struct Record {
	int num;
	string name;
	string sex;
	int age;
};
int main() {
	int m,n,t;
	cin>>m;
	for(int j=0; j<m; j++) {
		map<int,Record> maps;
		cin>>n;
		for(int i=0; i<n; i++) {
			Record r;
			cin>>r.num>>r.name>>r.sex>>r.age;
			maps.insert(make_pair(r.num,r));
		}
		cin>>t;
		cout<<maps[t].num<<" "<<maps[t].name<<" "<<maps[t].sex<<" "<<maps[t].age<<endl;
	}
	return 0;
}
