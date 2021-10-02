#include<iostream>

int main()
{
	char ch='a';
	char *p=&ch;
	char **q=&p;
	
	std::cout<<q<<"\n";
	std::cout<<*q<<"\n";
	std::cout<<**q<<"\n";
	std::cout<<static_cast<const void*>(*q)<<"\n\n";

	printf("%x\n",&p);
	printf("%x\n",p);
	printf("%x\n",&ch);
	printf("%c\n\n",*p);
	
	std::cout<<ch<<"\n";
	std::cout<<p<<"\n";
	std::cout<<&ch<<"\n";
	std::cout<<static_cast<const void*>(p)<<"\n";
	std::cout<<static_cast<const void*>(&ch)<<"\n";
	std::cout<<&p<<"\n";
	std::cout<<*p<<"\n";
}
