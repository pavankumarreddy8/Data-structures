#include<stdio.h>
int main()
{
	int i,j,arr[]={1,2,3,4,2,3,6,6,6,4,5,7};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Duplicate elements in given array: \n");    
    for(i = 0; i < length; i++) 
	{    
        for(j = i + 1; j < length; j++) 
		{    
            if(arr[i] == arr[j])    
            printf("%d\n", arr[j]);
    	}
	}
	return 0;
}
