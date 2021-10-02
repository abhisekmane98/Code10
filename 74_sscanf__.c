#include<stdio.h>
int main()
{
	char s[]="i love rohana maybe not\n 20 42.35 a";
	int a;
	float b;
	char ch,s1[40];
	sscanf(s,"%[^\n]%*c%d%f%c",s1,&a,&b,&ch);
	printf("%s,%d,%f,%cz",s1,a,b,ch);
}
