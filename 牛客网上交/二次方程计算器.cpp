#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>
#include<cmath>
#include<cstdio>
using namespace std;

double arr[3];

vector<string> split(string input,string token) {
	vector<string> res;
	string temp;
	size_t pos=0;
	while((pos=input.find(token))&&pos!=string::npos) {
		input.replace(pos,1," ");
	}
	stringstream is(input);

	while(is>>temp) {
		res.push_back(temp);
	}

	return res;
}

void set_arr(string input,bool is_posstive) {
	bool flag=false,symbol=true,prev_num=false;
	double num=1.0;
	int exp=0;
	for(int i=0; i<input.size(); i++) {
		if(input[i]>='0'&&input[i]<='9') {
			if(flag) {
				exp=input[i]-'0';
				flag=false;
			} else {
				double t_num=input[i]-'0';
				if(!is_posstive) {
					t_num=-t_num;
				}
				if(!symbol) {
					t_num=-t_num;
				}

				if(prev_num) {
					num=10*num+t_num;
				} else {
					num=t_num;
				}
				prev_num=true;
			}
		} else if(input[i]=='^') {
			flag=true;
			prev_num=false;
		} else if(input[i]=='+') {
			symbol=true;
			prev_num=false;
			arr[exp]+=num;
			exp=0;
			num=1.0;
		} else if(input[i]=='-') {
			symbol=false;
			if(i!=0) {
				prev_num=false;
				arr[exp]+=num;
				exp=0;
				num=1.0;
			}

		} else if(input[i]=='#') {
			arr[exp]+=num;
		} else {
			exp=1;
			prev_num=false;
			continue;
		}
	}
}

int main() {
	string input;
	while(getline(cin,input)) {
		memset(arr,0,sizeof(arr));
		vector<string> inputs=split(input,"=");
		string input1=inputs[0]+"#";
		string input2=inputs[1]+"#";
		set_arr(input1,true);
		set_arr(input2,false);

//		for(int i=0; i<3; i++) {
//			cout<<arr[i]<<endl;
//		}
		double judge=arr[1]*arr[1]-4*arr[0]*arr[2];
		double s1=0,s2=0;
		if(judge>=0) {
			double result=sqrt(judge);
			//cout<<result<<endl;
			s1=(-arr[1]-result)/(2*arr[2]);
			s2=(-arr[1]+result)/(2*arr[2]);
			if(s1>s2){
				double temp=s1;
				s1=s2;
				s2=temp;
			}
			printf("%.02lf %.02lf\n",s1,s2);
		} else {
			cout<<"No Solution"<<endl;
		}
	}
	return 0;
}
