/* 1. �������Ϊ���飬����飬С���飬�����顣
    A = B�� A��B����������顣
    A < B,  A����С���飬B��������飬ͬʱ��������A��B����������������顣
    A > B,  A��������飬B����С���飬ͬʱ��������A��B����������������顣
   2. ���һ�����ȳ�����С�����ֳ����ڴ����飬��ô������������顣
   3. �ж��������δ���ֵ����֣��������һ�����򷵻ؽ��0�����ǡ��Ϊ1������
      Ϊ�����֡�
 */
#include<iostream>
#include<set>
using namespace std;

int main() {
	int num,k;
	while(cin>>num>>k) {
		set<int> more,less,equal;
		for(int i=1; i<=num; i++) {
			legal[i]=false;
		}

		for(int i=0; i<k; i++) {
			int p,t;
			set<int> left,right;
			cin>>p;
			for(int j=0; j<p; j++) {
				cin>>t;
				left.insert(t);
			}

			for(int j=0; j<p; j++) {
				cin>>t;
				right.insert(t);
			}

			string flag;
			cin>>flag;
			if(flag=="=") {
				equal.insert(left.begin(),left.end());
				equal.insert(right.begin(),right.end());
			} else if(flag=="<") {
				less.insert(left.begin(),left.end());
				more.insert(right.begin(),right.end());
				for(int i=1; i<=num; i++) {
					if(left.count(i)==0&&right.count(i)==0)
						equal.insert(i);
				}
			} else {
				less.insert(right.begin(),right.end());
				more.insert(left.begin(),left.end());
				for(int i=1; i<=num; i++) {
					if(left.count(i)==0&&right.count(i)==0)
						equal.insert(i);
				}
			}

			for(auto i:less) {
				if(more.find(i)!=more.end()) {
					equal.insert(i);
				}
			}
		}

		int count_illegal=0;
		int illegal=1;

		for(int i=1; i<=num; i++) {
			if(equal.count(i)==0) {
				illegal=i;
				count_illegal++;
			}
		}

		if(count_illegal==1) {
			cout<<illegal<<endl;
		} else {
			cout<<"0"<<endl;
		}

	}
	return 0;
}
