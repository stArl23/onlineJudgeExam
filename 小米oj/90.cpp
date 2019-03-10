#include <bits/stdc++.h>
#include <cstdio> 
using namespace std;

struct Time{
	int second;
	int minute;
	int hour;
	int day;
	Time(){
		this->day=0;
		this->hour=0;
		this->minute=0;
		this->second=0;
	}
	Time(int second){
		this->second=second%60;
		this->minute=(second/60)%60;
		this->hour=(second/3600)%24;
		this->day=(second/(3600*24));
	}
	
	Time result(int second){
		Time time(second);
		Time time1;
		time1.second+=this->second-time.second;
		if(time1.second<0){
			time1.minute--;
			time1.second+=60;
		}
		
		time1.minute+=this->minute-time.minute;
		if(time1.minute<0){
			time1.hour--;
			time1.minute+=60;
		}
		
		time1.hour+=this->hour-time.hour;
		if(time1.hour<0){
			time1.day--;
			time1.hour+=24;
		}
		
		time1.day+=this->day-time.day;
		return time1; 
	}
};

int main(){
	string s;
    getline(cin,s);
    Time time; 
    sscanf(s.c_str(),"%dd%02d%02d%02d",&time.day,&time.hour,&time.minute,&time.second);
    int sum_second=24*time.day+time.hour;
    if(time.minute>time.hour){
    	sum_second++;
	}else if(time.minute==time.hour&&time.second==59){
		sum_second++;
	}
    Time res=time.result(sum_second);
    printf("%dd%02d %02d %02d",res.day,res.hour,res.minute,res.second);
	return 0;
}
