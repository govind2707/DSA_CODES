#include<bits/stdc++.h>
using namespace std;
bool isvalid(int i,int j,int n)
{
	if(i>=0 and i<n and j>=0 and j<n)
	return 1;
	return 0;
}
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	a[i][j]=0;
	a[0][0]=1;
	for(int i=1;i<n;i++)
	{
		int j;
		for( j=0;j<i;j++)
		{
			a[i][j]=(isvalid(i-1,j,n)?a[i-1][j]:0)+(isvalid(i-1,j-1,n)?a[i-1][j-1]:0);
			
		}
		a[i][j]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		cout<<a[i][j];
		cout<<"\n";
	}
}
