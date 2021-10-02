#include<iostream>

int main()
{
	int a[]={-2,-3,-5,-8,-11,-1,-18};
	int max=INT_MIN;
	for(int i:a)
	{
		if(i>max)
			max=i;
	}
	std::cout<<max;
}
