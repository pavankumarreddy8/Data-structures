#include<stdio.h>
int main()
{
	int i,a[i],n;
	printf("Enter the number of elements in a array:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers are:");
	for(i=0;i<n;i++)
	{
			if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	printf("Odd numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}
	}
	
}
