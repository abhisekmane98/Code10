#include<iostream>

int main()
{
	char a[5]={'2','\0','3','\0','4'};
	char b[4]={'2','3','4','\0'};
	int i;
	for(i=0;i<=4;i++)
	{
		std::cout<<a[i]<<"\n";
	}
	std::cout<<b;
}
