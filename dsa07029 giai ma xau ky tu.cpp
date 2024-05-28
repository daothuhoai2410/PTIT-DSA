#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s,k,so,ans,h; 
		cin >> s;
		stack<char> a;
		int n;
		for(int i=0;i<s.size();i++)
		{
			k = "", so = "", ans = "", h = "";
			if(s[i] == ']')
			{
				while( a.top() != '[')
				{
					k = a.top() + k;
					a.pop();
				}
				a.pop();
				
				while( !a.empty() && a.top() >= '0' && a.top() <= '9')
				{
					so = a.top() + so;
					a.pop();
				}
				
				n = 0;
				for(int i=0;i<so.size();i++)
				{
					n = n*10 + so[i] - '0';
				}
				if(n==0) n++;
				for(int i=0;i<n;i++)
				{
					h += k;
				}
				for(int i=0;i<h.size();i++)
				{
					a.push(h[i]);
				}
			}
			else
			{
				a.push(s[i]);
			}
			
		}
		while(!a.empty())
		{
			ans = a.top() + ans;
			a.pop();
		}
		cout << ans << endl;
	}
}
