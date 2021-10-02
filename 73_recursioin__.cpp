#include<iostream>

int fun(int);

int main()
{
	int n;
	std::cout<<"Enter a number";
	std::cin>>n;
	std::cout<<fun(n);
}

int fun(int n)
{
	int sum;

	if(n==1)
		return n;
	else
		sum=n+fun(n-1);
	
	return sum;
}
