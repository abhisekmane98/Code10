#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[]="6010";
	char *end;
	long  int n;
	
	n=strtol(s,&end,10);
	printf("%s\n%d\n",s,n);
}
