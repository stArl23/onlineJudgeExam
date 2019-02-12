#include<iostream>
#include<vector>
using namespace std;

struct Student {
	string num;
	string start_time;
	string end_time;
};

int main() {
	int n;
	while(cin>>n) {
		vector<Student> students;
		for(int i=0; i<n; i++) {
			Student student;
			cin>>student.num>>student.start_time>>student.end_time;
			students.push_back(student);
		}

		Student open_door=students[0],close_door=students[0];

		for(int i=1; i<students.size(); i++) {
			if(open_door.start_time>students[i].start_time) {
				open_door=students[i];
			}

			if(close_door.end_time<students[i].end_time) {
				close_door=students[i];
			}
		}
		
		cout<<open_door.num<<" "<<close_door.num<<endl;
	}
	return 0;
}
