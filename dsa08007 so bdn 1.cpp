#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		queue<long long> a;
		a.push(1);
		int cnt=0;
		long long s;
		long long tmp = a.front();
		while(tmp<=n)
		{
			tmp = a.front();
			a.pop();
			if(tmp<=n) cnt++;
			a.push(tmp*10+0);
			a.push(tmp*10+1);
		}
		cout << cnt << endl;
	}
}
