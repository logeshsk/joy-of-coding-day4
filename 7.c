#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i;
    printf("Enter the string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]<97&&(s[i-1]==' '||i==0))
                printf("%c",s[i]);
    }
}

