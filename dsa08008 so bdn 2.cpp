#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<long long> a;
		a.push(1);
		int ok=1;
		while(ok)
		{
			long long tmp = a.front();
			a.pop();
			if(tmp%n==0)
			{
				cout << tmp << endl;
				ok=0;
			}
			a.push(tmp*10+0);
			a.push(tmp*10+1);
		}
	}
}
