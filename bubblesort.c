#include<stdio.h>
int swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)

	for(j=0;j=n-1-i;j++)
	
		if(arr[j]>arr[j+1])
		{
		swap(&arr[j],&arr[j+1]);
}
}

int print(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

void main()
{
	int n,arr[n],i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the numbers of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	print(arr,n);
}
