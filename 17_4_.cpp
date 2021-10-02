#include<iostream>

int main()
{
	float a[]={2.5,3.2,8,9};
	for(int i=0;i<=3;i++)
	{
		std::cout<<sizeof(a[i])<<","<<a[i]<<"\n";
	}
	
}
