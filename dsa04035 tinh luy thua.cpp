#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;

long long luythua(long long a,long long b)
{
	if(b==0) return 1;
	long long x=luythua(a,b/2);
	if(b%2==0)
		return (x*x)%mod;
	return (((x*x)%mod)*a)%mod;
}

int main()
{
	long long a,b;
	int ok=1;
	while(ok)
	{
		cin >> a >> b;
		if(a==0 && b==0)
		{
			ok=0;
		}
		else
		{
			cout << luythua(a,b) << endl;
		}
	}
}
