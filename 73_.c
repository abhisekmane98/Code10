#include<stdio.h>

int fun(int);

int main()
{
	int n;
	
	printf("Enter a number");
	scanf("%d",&n);
	
	printf("%d",fun(n));
}

int fun(int n)
{
	int sum;
	if(n==1)
		return 1;
	else
		sum=n+ fun(n-1);
		
	return sum;
}
