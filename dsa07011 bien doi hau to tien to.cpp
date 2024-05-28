#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;cin >> s;
		stack<string> a;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
			{
				string sau = a.top();
				a.pop();
				string dau = a.top();
				a.pop();
				string tmp = s[i] + dau + sau ;
				a.push(tmp);
			}
			else
			{
				a.push(string(1,s[i]));
			}
		}
		cout << a.top() << endl;
	}
}
