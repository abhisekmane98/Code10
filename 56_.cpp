#include<iostream>

int main()
{
	char s[]="   0xa1bonapart";
	char *end;
	long int n;
	
	n=strtol(s,&end,16);
	
	printf("%d\n%x\n",0xa1b,n);
	std::cout<<s<<"\n"<<end<<"\n"<<n;
}
