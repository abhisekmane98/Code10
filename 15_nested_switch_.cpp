#include<iostream>

int main()
{
	int a=3;
	char b='c';
	switch(a)
	{
		case 1:
			std::cout<<"hey";
			break;
		case 2:
			std::cout<<"hello";
			break;
		case 3:
			switch(b)
			{
				case 'a':
					std::cout<<"fight club";
					break;
				case 'b':
					std::cout<<"forest gump";
					break;
				default :
					std::cout<<"fuck off";
			}
	}
}
