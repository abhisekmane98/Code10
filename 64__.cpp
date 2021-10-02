#include<iostream>

int main()
{
	char a[20],b[20],c[20]="";
	if(c==nullptr)
		puts("hey");
	else
		puts("bye");
	
	std::cin.get(a,20);
//	std::cin.ignore();
	std::cin.get(b,20);
	
	std::cout<<a;
	std::cout<<"m"<<c<<"n";
}
