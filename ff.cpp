#include<iostream>
using namespace std;

int main()
{
	int n,i,j,count=0,flag=0,sum=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		flag=arr[i];
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				i++;
				break;
			}
			else
			{
				sum=arr[i];
			}
		}
	}
	cout<<sum;
}
