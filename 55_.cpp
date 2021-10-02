#include<iostream>
int main()
{
	char s[]="6010";
	char *end=NULL;
	long  int n;
	
	n=strtol(s,&end,10);
	
	std::cout<<s<<"\n";
	std::cout<<n<<"\n";
	std::cout<<end<<"hey";
}
