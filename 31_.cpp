#include<iostream>
#include<string.h>

int main()
{
	char *s;
	s=new char[6];
	strcpy(s,"hello");
	std::cout<<s;
	
}
