#include <bits/stdc++.h>
using namespace std;

int n, a[20],ok;

void sinh()
{
	for(int i=n;i>0;i--)
	{
		if(a[i]==0)
		{
			a[i]=1;
			break;
		}
		else
		{
			a[i]=0;
		}
		if(i==1) ok =0;
	}
}

bool check()
{
	if(a[1]!=0 || a[n]!=1)
	{
		return false;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==0)
		{
			if(a[i]==a[i+1]) return false;
		}
	}
	int cnt =0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			cnt =0;
		}
		else
		{
			cnt++;
		}
		if(cnt>3) return false;
	}
	return true;
}

int main()
{
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			a[i]=0;
		}
		ok=1;
		set<string> st;	
		while(ok)
		{
			string s;
			if(check())
			{
				for(int i=1;i<=n;i++)
				{
					if(a[i]==0)	s+='8';
					else s+='6';
				}
				st.insert(s);
		    	sinh();
			}
			else	 sinh();
		}
		for(auto x:st){
			cout<<x<<endl;
		}
}

