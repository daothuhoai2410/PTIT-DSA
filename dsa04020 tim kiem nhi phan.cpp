#include <bits/stdc++.h>
using namespace std;

int n,k, a[1000005];

int timkiem(int a[],int n,int k)
{
	int low=0;
	int high=n-1;
	int mid = (low+high)/2;
	while(low <= high)
	{
		if(k < a[mid])
		{
			high = mid -1;;
		}
		else if(k > a[mid])
		{
			low = mid+1;
		}
		else
			return mid;
		mid = (low+high)/2;
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int i = timkiem(a,n,k);
		if(i==-1)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << i +1 << endl;
		}
	}
}
