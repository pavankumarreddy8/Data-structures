#include<stdio.h>
int main() {
	int n,i;
	int fact = 1;
	printf("enter an integer:");
	scanf("%d",&n);
	if(n<0)
	printf("enter a positive number to find its factorial\n");
	else {
		for (i=1;i<=n;i++){
			fact*=i;
		}
		printf("factorial of %d=%d",n,fact);
	}
}
