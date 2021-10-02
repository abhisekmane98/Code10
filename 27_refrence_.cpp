#include<iostream>

int main()
{
	int a=3,b=5;
	int &y;
	&y=b;
	//&y=b;
	std::cout<<y<<","<<a;
}
