#include<iostream>
#include<map>


using namespace std;

int months[]={31,28,31,30,31,30,31,31,30,31,30,31};

bool is_run(int year) {
	return ((year%100!=0&&year%4==0)||(year%400==0));
}

int main(){
	map<string,int> month_num;
	month_num.insert(make_pair("January",0));
	month_num.insert(make_pair("February",1));
	month_num.insert(make_pair("March",2));
	month_num.insert(make_pair("April",3));
	month_num.insert(make_pair("May",4));
	month_num.insert(make_pair("June",5));
	month_num.insert(make_pair("July",6));
	month_num.insert(make_pair("August",7));
	month_num.insert(make_pair("September",8));
	month_num.insert(make_pair("October",9));
	month_num.insert(make_pair("November",10));
	month_num.insert(make_pair("December",11));
	int day,year;
	string month;
	
	while(cin>>day>>month>>year){
		int now_day=5,now_month=1,now_year=2019,day1=0,day2=0,
		month1=month_num[month];
		
		for(int i=1000;i<year;i++){
			day1+=365;
			if(is_run(i)){
				day1++;
			}
		}
		
		for(int i=0;i<month1;i++){
			day1+=months[i];
			if(is_run(year)&&i==1){
				day1++;
			}
		}
		
		day1+=day;
		
		
		for(int i=1000;i<now_year;i++){
			day2+=365;
			if(is_run(i)){
				day2++;
			}
		}
		
		for(int i=0;i<now_month;i++){
			day2+=months[i];
		}
		
		day2+=now_day;
		
		//cout<<day1<<endl;
		//cout<<day2<<endl;
		
		int weekday=1,token=(day1-day2)%7;
		
		weekday=(token+weekday+7)%7;
		
		switch(weekday){
			case 0:
				cout<<"Monday"<<endl;
				break;
			case 1:
				cout<<"Tuesday"<<endl;
				break;
			case 2:
				cout<<"Wednesday"<<endl;
				break;
			case 3:
				cout<<"Thursday"<<endl;
				break;
			case 4:
				cout<<"Friday"<<endl;
				break;
			case 5:
				cout<<"Saturday"<<endl;
				break;
			case 6:
				cout<<"Sunday"<<endl;
				break;
		}
		
	}
	return 0;
}
