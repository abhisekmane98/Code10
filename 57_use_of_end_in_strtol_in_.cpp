#include<iostream>


int main()
{
	const char *s="431 23 43";
	char *end,*end2;
	long int n;
	
	n=strtol(s,&end,10);
	std::cout<<n<<"\n";
	
	n=strtol(end,&end2,10);
	std::cout<<n<<"\n";
	
	n=strtol(end2,NULL,10);
	std::cout<<n<<"\n";
}
