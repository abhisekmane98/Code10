#include<iostream>
#include<cstring>
int main()
{
	char s[]="x=10;y=20;z=30",*p;
	
	p=strtok(s,";");
	
	while(p!=nullptr)
	{
		std::cout<<p<<"\n";
		p=strtok(nullptr,";");
		
	}
	std::cout<<"hey";
	
	
}
