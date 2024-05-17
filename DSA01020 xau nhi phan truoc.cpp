#include <bits/stdc++.h>
using namespace std;

string back(string s)
{
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
			s[i] = '0';
			return s;
		}
		else
		{
			s[i]='1';
		}
	}
	return s;
}

int main(){
	int t; cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		s = back(s);
		cout << s << endl;
	}
}
