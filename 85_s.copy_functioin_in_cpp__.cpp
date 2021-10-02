#include<iostream>

int main()
{
	std::string s1="bonapart is greatest king of all time";
	char s2[20];
	
	s1.copy(s2,10);
	s2[10]='\0';
	std::cout<<s2;
}
