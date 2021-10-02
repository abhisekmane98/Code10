#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[]="6010_ig201";
	char *end;
	long  int n;
	
	n=strtol(s,&end,10);
	printf("%s\n%s\n%d",s,end,n);
}
