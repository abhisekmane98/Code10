#include<stdio.h>

typedef struct
{
	int a;
	char ch1,ch2,ch3;	
}letter;

int main()
{
	letter l1;
	printf("%d",sizeof(l1));
}
