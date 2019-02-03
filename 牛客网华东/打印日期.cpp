#include<iostream>
#include<cstdio>

using namespace std;

int months[]= {31,28,31,30,31,30,31,31,30,31,30,31};

bool is_run(int year) {
	return ((year%100!=0&&year%4==0)||(year%400==0));
}

int main() {
	int year,day;
	while(cin>>year>>day) {
		int index=0;
		for(int i=0; i<12; i++) {
			int month=months[i];
			if(i==1&&is_run(year)) {
				month++;
			}
			if(day>month) {
				day-=month;
			} else {
				index=i;
				break;
			}
		}
		
		printf("%04d-%02d-%02d\n",year,index+1,day);
	}
	return 0;
}
