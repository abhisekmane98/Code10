#include<stdio.h>

typedef struct 
{
	int id;
	char name[40];
}EMP;

int main()
{
	int k;
	FILE *fp;
	EMP e1={34,"abhi"};
	
	fp=fopen("84_.dat","w");
	while(1)
	{
		k=fwrite(&e1,44,1,fp);
		printf("%d",k);
		if(k!=1)
			getch();
	}
	
	
	fclose(fp);
}
