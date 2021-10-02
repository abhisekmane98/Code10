#include<iostream>
#include <cstdio>

int main()
{
	char s[20],s2[20];
	std::cout<<"Enter a name\n";
	std::cin.get(s,20);
	std::cout<<s;
	
	std::cin.ignore();
	
	std::cout<<"Enter a name again\n";
	std::cin.get(s2,20);
	std::cout<<s2;
	system("PAUSE");
}
