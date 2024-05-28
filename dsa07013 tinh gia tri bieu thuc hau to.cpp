#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<long long> a;
		long long tmp;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
			{
				long long sau = a.top();
				a.pop();
				long long dau = a.top();
				a.pop();
				if(s[i] == '+')	tmp = dau + sau;
				if(s[i] == '-')	tmp = dau - sau;
				if(s[i] == '/')	tmp = dau / sau;
				if(s[i] == '*')	tmp = dau * sau;
				a.push(tmp);
			}
			else
			{
				a.push((long long)(s[i]-'0'));
			}
		}
		cout << a.top() << endl;
	}
}
