#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;

long long n,k;

long long luythua(long long a,long long n)
{
	if(n==0) return 1;
	long long x = luythua(a,n/2);
	if(n%2==0) 
		return (x*x)%mod;
	return (((x*x)%mod)*a)%mod;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		
		cout << luythua(n,k) << endl;
	}
}
