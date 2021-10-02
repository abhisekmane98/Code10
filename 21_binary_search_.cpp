#include<iostream>
int main()
{
	int a[10]={6,2,15,17,20,22,25,28,30,35};
	int l=0,h=9,m,key=27;
	
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==key)
		{
			std::cout<<"got at position "<<m;
			return 0;
		}
		else
		{
			if(key>a[m])
				l=m+1;
			else
				h=m-1;
		}
		
	}
	std::cout<<"Not found";
	return 0;
}
