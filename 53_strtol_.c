#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[]="6010";
	char *end=NULL;
	long  int n;
	

	n=strtol(s,&end,10);
	printf("%s,%s,%ld\n",s,end,n);
	
	
}
