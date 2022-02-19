#include<iostream>
using namespace std;

void quicksort(int[],int,int);
int partition(int[],int,int);
int main(){
	int n,i;
    cin>>n;
    int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    quicksort(arr,0,n-1);
    for(i=0;i<=n-1;i++)
	{
		cout<<arr[i];
	}
}
int partition(int arr[],int low,int high)
{
	
	int temp;
	int i=low;
	int j=high;
	int pivot=low;
	while(i<j)
	{                                                                     
		while(arr[i]<=arr[pivot])
		{
			i++;
		}
		while(arr[j]>arr[pivot])
		{
			j--;
		}
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[pivot];
	arr[pivot]=arr[j];
	arr[j]=temp;
	return j;
}

void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pivot=partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}
