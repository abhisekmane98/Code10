#include<stdio.h>
#include<string.h>
int main()
{
	char *p,s1[]="bonapart",s2[]="king";
	p=strstr(s1,s2);
	
	printf("%d\n",p);
//	printf("%d\n",*p);  invoke UB
	
	if(p==NULL)
		puts("hey");
	else
		puts("bye");
}
