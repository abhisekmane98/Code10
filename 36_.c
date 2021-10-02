#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20]="bonapart",s2[]="boy",*k;
    
    printf("Hey");
    k=strstr(s1,s2);
    printf("%s",k);
    
    printf("bye");
}
