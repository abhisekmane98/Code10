#include<iostream>

int main()
{
	int a[]={2,8,3,5,11};
	for(int &i:a)
	{
		std::cout<<++i<<"\n";
	}
	
	std::cout<<"\n";
	
	for(int i:a)
	{
		std::cout<<i<<"\n";
	}
}
