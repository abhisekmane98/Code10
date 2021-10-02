#include<iostream>
#include<cstring>
int main()
{
	char *p,s1[]="bonapart",s2[]="king";
	
	p=strstr(s1,s2);
	
	if(p!=nullptr)
		puts("hey");
	else
		puts("bye");
}
