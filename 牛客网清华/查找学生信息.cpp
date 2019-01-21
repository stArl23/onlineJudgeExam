#include<iostream>
#include<map>
using namespace std;

struct Stu {
	string s_num;
	string name;
	string sex;
	int age;
};

int main() {
	int n,m,age;
	string s_num,name,sex;
	map<string,Stu> s_stus;
	while(cin>>n) {
		while(n--) {
			cin>>s_num>>name>>sex>>age;
			Stu stu;
			stu.s_num=s_num;
			stu.name=name;
			stu.sex=sex;
			stu.age=age;

			s_stus[s_num]=stu;
		}
		cin>>m;
		while(m--) {
			cin>>s_num;
			if(s_stus.count(s_num)>0){
				Stu temp=s_stus[s_num];
				cout<<temp.s_num<<" "<<temp.name<<" "<<temp.sex<<" "<<temp.age<<endl;
			}else{
				cout<<"No Answer!"<<endl;
			} 
		}
	}
	return 0;
}
