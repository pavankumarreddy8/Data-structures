#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char str[100];
	printf("Enter the string:");
	scanf("%s",&str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			printf("valid string\n");
		}
		else
		printf("invalid\n");
	
	}

}
