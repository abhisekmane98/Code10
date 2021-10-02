#include<stdio.h>
#include<string.h>

int main()
{
	char s[]="bonapart is greatest king";
	char s2[20];
	
	strncpy(s2,s,10);
	printf("%s",s2);
}
