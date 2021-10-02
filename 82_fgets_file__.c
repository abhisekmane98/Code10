#include<stdio.h>

int main()
{
	char s[26];
	FILE *fp;
	fp=fopen("82.txt","r");
	while( fgets(s,26,fp)!=NULL)
	{
		printf("%sa",s);
	}
}
