#include<iostream>

int a=10;
int main()
{
	int a=20;
	{
		int a=30;
		std::cout<<a<<"\n";
	}
	std::cout<<a<<"\n";
	std::cout<<::a;
}
