#include<iostream>
#include<string.h>

int main()
{
	char *s;
	s=new char[6];
	s=strdup("hello");
	std::cout<<s;
	
}
