#include<iostream>
#include <limits.h>
#define N 500
#define INF  2211686018427387940
using namespace std;
//���ֽⷨ��dp�͸��������㷨 
int l1,l2,l3,c1,c2,c3;
int dist[N],cost[N]; 
int Price(int l) {
	if(l<=l1)return c1;
	else if(l<=l2)return c2;
	else
		return c3;
}

int main() {
	int start,end,n;

	while(cin>>l1>>l2>>l3>>c1>>c2>>c3) {
		cin>>start>>end>>n;

		//����ǰû��ûǮ

		dist[1]=0;
		for(int i=2; i<=n; i++) {
			cin>>dist[i];
		}

		for(int i=start;i<=end;i++){
			cost[i]=INT_MAX;
		}
		cost[start]=0;
		for(int i=start+1; i<=end; i++) { //ǰ��������
			//�ȼ��赽iվ��Ҫ��������Ǯ
			for(int j=start; j<i; j++) { //��iվ��Ʊ�����Ǵ�jվ���
				int L=dist[i]-dist[j];//jվ��iվ�ľ���
				if(L<=l3&&cost[j]+Price(L)<cost[i]) {
					//�����jվ��Ʊ�ܱ������ķ�����ʡǮ���Ǿʹ�j��Ʊ
					cost[i]=cost[j]+Price(L);
				}
			}
			
		}

		cout<<cost[end]<<endl;
	}
	return 0;
}



