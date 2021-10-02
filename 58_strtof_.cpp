#include<iostream>

int main()
{
	char s[]="    42.34abhishek";
	char *end;
	float n;
	
	n=strtof(s,&end);
	
	std::cout<<s<<"\n";
	std::cout<<end<<"\n";
	std::cout<<n;
}
