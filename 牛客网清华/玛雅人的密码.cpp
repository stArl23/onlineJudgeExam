#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>

using namespace std;

void swap(string &temp,int a,int b) {
	char t=temp[a];
	temp[a]=temp[b];
	temp[b]=t;

}

int get_all_string(string &input,set<string> &is_visited,deque<string> &to_select) {
	int length=input.size(),result=0;
	for(int i=0; i<length-1; i++) {
		string temp=input;
		swap(temp,i,i+1);
		//cout<<temp<<endl;
		if(is_visited.count(temp)==0) {
			result++;
			is_visited.insert(temp);
			to_select.push_back(temp);
		}
	}

	return result;
}


int main() {
	string input;
	int length;
	while(cin>>length>>input) {
		string now=input;

		set<string> is_visited;
		deque<string> to_select;
		int find=0;
		int ex_size=0;
		bool flag=false;
		//找出所有有效的交换状态若是未出现过，就放入待访问队列中
		if(now.find("2012")==string::npos) {
			ex_size=get_all_string(now,is_visited,to_select);
			//cout<<ex_size<<endl;
		} else {
			flag=true;
		}



		//bfs
		while(to_select.size()>0&&!flag) {
	
			
			//cout<<now<<endl;
			

			int t_length=0;
			find++;
			for(int i=0; i<ex_size; i++) {
				now=to_select.front();
				if(now.find("2012")!=string::npos) {
					flag=true;
					break;
				}
				t_length+=get_all_string(now,is_visited,to_select);
				to_select.pop_front();
			}
			ex_size=t_length;
			//cout<<ex_size<<endl;

			
			
		}

		if(flag) {
			cout<<find<<endl;
		} else {
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
