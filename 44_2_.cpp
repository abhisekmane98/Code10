#include<iostream>

int main()
{
	const char *p="bonapart";
	
	printf("%s\n",p);
	printf("%x\n",p);
	printf("%x\n",&p);
	printf("%c\n\n",*p);
	
	std::cout<<p<<"\n";
	std::cout<<static_cast<const void*>(p)<<"\n";
	std::cout<<&p<<"\n";
	std::cout<<*(p+1)<<"\n";
}
