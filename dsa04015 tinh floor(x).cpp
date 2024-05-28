#include <bits/stdc++.h>
using namespace std;

int n,a[1000005],x;

int timkiem(int a[],int n, int x)
{
	int low=0;
	int high =n-1;
	int mid = (low+high)/2;
	while(low <= high)
	{
		if(x == a[mid])
		{
			return mid+1 ;
		}
		else if(x>a[mid])
		{
			low = mid+1;
		}
		else if(x<a[mid])
		{
			high = mid-1;
		}
		mid = (low+high)/2;
	}
	if(x>a[mid]) return mid+1;
	return -1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> x;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		cout << timkiem(a,n,x) << endl;
	}
}
