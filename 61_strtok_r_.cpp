#include<iostream>
#include<cstring>
int main()
{
	char s[]="x=10;y=20;z=30";
	char *p,*saveptr;
	
	p=strtok_r(s,";",&saveptr);
	std::cout<<p<<"\n";
	std::cout<<saveptr<<"\n\n";
	
	p=strtok_r(nullptr,";",&saveptr);
	std::cout<<p<<"\n";
	std::cout<<saveptr<<"\n\n";
	
	p=strtok_r(nullptr,";",&saveptr);
	std::cout<<p<<"a\n";
	if(saveptr==nullptr)
		puts("hey");
		
	p=strtok_r(nullptr,";",&saveptr);
	if(p==nullptr)
		puts("bye");
	std::cout<<saveptr<<"a\n\n";
}
