#include<iostream>

int main()
{
	int a[]={8,6,11,13,27,15,21,12};
	for(int i=0;i<=7;i++)
	{
		if(a[i]==23)
		{
			std::cout<<"found at position "<<i;
			return 0;
		}	
	}
	std::cout<<"not found";
	return 0;
}
