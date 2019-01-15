#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<string>

using namespace std;

class Fusu {
	public:
		int x;
		int y;

		Fusu(int x,int y) {
			this->x=x;
			this->y=y;
		}
};

struct cmp {
	bool operator()(Fusu a,Fusu b) {
		int ma=a.x*a.x+a.y*a.y;
		int mb=b.x*b.x+b.y*b.y;
		return (ma<mb)?true:((ma>mb)?false:(a.y>b.y));
	}
};

int main() {
	int num;
	cin>>num;
	priority_queue<Fusu,vector<Fusu>,cmp > heap;
	while(num--) {
		string temp="";
		cin>>temp;
		if(temp=="Pop") {
			if(heap.empty()) {
				cout<<"empty"<<endl;
			} else {
				Fusu t=heap.top();
				heap.pop();
				cout<<t.x<<"+"<<"i"<<t.y<<endl;
				cout<<"SIZE = "<<heap.size()<<endl;
			}
		} else if(temp=="Insert") {
			int a,b;
			scanf("%d+i%d",&a,&b);
			Fusu t(a,b);
			heap.push(t);
			cout<<"SIZE = "<<heap.size()<<endl;

		}
	}

	return 0;
}
