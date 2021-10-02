#include<iostream>
#include<stdlib.h>
#include<cstring>

int main()
{
	char s[]="47";
	char *end=nullptr;
	std::cout<<end;
	system("pause");
	long int n;
	
	n=strtol(s,&end,10);
	
	std::cout<<"a"<<end<<"b"<<strlen(end);
}
