#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	char s[]="47";
	char *end;
	long  int n;
	
	n=strtol(s,&end,10);
	
	printf("%s,%d\n",s,n);
	printf("%d,%c,%d\n",end,*end,*end);
	
	if(*end==NULL)
		puts("Not End string available");
	else
		printf("%s",end);
}
