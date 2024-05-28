#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	deque<string> a;
	cin.ignore();
	while(t--)
	{
		string s; getline(cin,s);
		if(s[4] == 'B')
		{
			string k;
			for(int i=9;i<s.size();i++)
			{
				k+=s[i];
			}
			a.push_back(k);
		}
		else if(s[4] == 'F')
		{
			string k;
			for(int i=10;i<s.size();i++)
			{
				k+=s[i];
			}
			a.push_front(k);
		}
		else if(s[3] == 'B')
		{
			if(!a.empty())
			{
				a.pop_back();
			}
		}
		else if(s[3] == 'F')
		{
			if(!a.empty())
			{
				a.pop_front();
			}
		}
		else if(s[5] == 'B')
		{
			if(a.empty())
			{
				cout << "NONE\n";
			}
			else
			{
				cout << a.back() << endl;
			}
		}
		else if(s[5] == 'F')
		{
			if(a.empty())
			{
				cout << "NONE\n";
			}
			else
			{
				cout << a.front() << endl;
			}
		}
	}
}
