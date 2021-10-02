#include<iostream>

int main()
{
	int x=4,a=3,b=7,s;
	s=x++ * a+ ++b;
	std::cout<<s<<","<<x<<","<<a<<","<<b;
}
