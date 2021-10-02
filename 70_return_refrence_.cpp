#include<iostream>

int add(int,int);

int main()
{
	int a=3,b=7;
	int &r=add(a,b);
	std::cout<<r;
	
}

int add(int x,int y)
{
	static int z=x+y;
	return z;
}
