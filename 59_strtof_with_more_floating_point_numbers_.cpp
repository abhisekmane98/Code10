#include<iostream>

int main()
{
	char s[]="    42.34 52.63  81.32";
	char *end,*end2,*end3;
	float n;
	
	n=strtof(s,&end);
	std::cout<<s<<"\n";
	std::cout<<end<<"\n";
	std::cout<<n<<"\n\n";
	
	n=strtof(end,&end2);
	std::cout<<end<<"\n";
	std::cout<<end2<<"\n";
	std::cout<<n<<"\n\n";
	
	n=strtof(end2,NULL);
	std::cout<<end2<<"\n";
//	std::cout<<end2<<"\n";
	std::cout<<n<<"\n\n";
}


