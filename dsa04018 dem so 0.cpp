#include <bits/stdc++.h>
using namespace std;


int n,a[1005];
int cnt;

int main(){
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		cnt=0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]==0) cnt++;
		}
		cout << cnt << endl;
	}
}
