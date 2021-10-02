#include<iostream>

typedef struct
{
	int b;
	int *p;
	char ch;
	int a;
} EMP;
int main()
{
	EMP e1;
	printf("%u,%u,%u,%u\n",&e1.b,&e1.p,&e1.ch,&e1.a);
	printf("%d",sizeof(e1));
}
