#include<iostream>

using namespace std;

int main(){
	long long x,y,index=0;
	long long  maxx=-999999999,maxy=-999999999,minx=999999999,miny=999999999;
	while(cin>>x>>y){
		if(x==0&&y==0){
			if(index==0)break;
			cout<<minx<<" "<<miny<<" "<<maxx<<" "<<maxy<<endl;
			minx=999999999,maxx=-999999999,miny=999999999,maxy=-999999999;
			index=0;
			continue;
		}
		if(maxx<x)maxx=x;
		if(minx>x)minx=x;
		if(maxy<y)maxy=y;
		if(miny>y)miny=y;
		index++;
	}
	
	
	return 0;
}
