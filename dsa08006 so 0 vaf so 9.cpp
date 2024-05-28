#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<long long> a;
		a.push(9);
		while(1)
		{
			long long tmp = a.front();
			string s = to_string(tmp);
			a.pop();
			
			if(tmp%n==0)
			{
				cout << tmp << endl;
				break;
			}
			if(s.size()<11)
			{
				a.push(tmp*10+0);
				a.push(tmp*10+9);
			}
		}
	}
}
