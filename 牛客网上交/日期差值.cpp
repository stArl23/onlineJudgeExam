#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

long long months[]= {31,28,31,30,31,30,31,31,30,31,30,31};

bool is_run(long long year) {
	return ((year%100!=0&&year%4==0)||(year%400==0));
}

int main() {
	string input1,input2;
	while(cin>>input1>>input2) {
		int y1,y2,m1,m2,d1,d2,day1=0,day2=0;
		y1=atoi(input1.substr(0,4).c_str());
		y2=atoi(input2.substr(0,4).c_str());

		m1=atoi(input1.substr(4,2).c_str());
		m2=atoi(input2.substr(4,2).c_str());

		d1=atoi(input1.substr(6,2).c_str());
		d2=atoi(input2.substr(6,2).c_str());
		//cout<<y1<<" "<<m1<<" "<<d1<<":"<<y2<<" "<<m2<<" "<<d2<<endl;
		for(long long i=1; i<y1; i++) {
			day1+=365;
			if(is_run(i))
				day1++;
		}

		for(long long i=1; i<y2; i++) {
			day2+=365;
			if(is_run(i))
				day2++;
		}

		for(int i=0; i<(m1-1); i++) {
			day1+=months[i];
			if(is_run(y1))
				day1++;
		}
		
		for(int i=0; i<(m2-1); i++) {
			day2+=months[i];
			if(is_run(y2))
				day2++;
		}
		
		day1+=d1;
		day2+=d2;
		
		//cout<<day1<<endl;
		//cout<<day2<<endl;
		if(day1>day2){
			cout<<(day1-day2+1)<<endl;
		}else{
			cout<<(day2-day1+1)<<endl;
		}
	}
	return 0;
}
