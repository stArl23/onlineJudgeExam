#include<cstdio>
#include<iostream>

using namespace std;

int monthes[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool is_run(int year){
	return (year%4==0&&year%100!=0)||(year%400==0);
}
int main(){
	int m,year,month,day;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>year>>month>>day;
		int month_day=monthes[month];
		if(is_run(year)&&month==2){
			month_day++;
		}
		
		day+=1;
		if(day==(month_day+1)){
			day=1;
			month++;
		}
		
		if(month==13){
			month=1;
			year+=1;
		}
		printf("%04d-%02d-%02d\n",year,month,day);
	}
	return 0;
}
