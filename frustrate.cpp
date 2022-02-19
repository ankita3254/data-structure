#include<iostream>
using namespace std;

void quicksort(int[],int,int);

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
void quicksort(int arr[],int low,int high)
{
	
	int temp;
	int i=low;
	int j=high;
	int pivot= arr[i];
	while(i<j)
	{                                                                     
		while(arr[i]<=pivot)
		{
			i++;
		}
		while(arr[j]>=pivot)
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
	quicksort(arr,low,j-1);
	quicksort(arr,j+1,high);
}
