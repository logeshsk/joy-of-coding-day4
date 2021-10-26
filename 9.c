#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s1[50],s2[50],c;
    int i,j;
    printf("Enter string 1\n");
    gets(s1);
    printf("Enter string 2\n");
    gets(s2);
    if(strlen(s1)==strlen(s2))
            for(i=0;i<strlen(s1)-1;i++)
            {
                c=s1[0];
                for(j=0;j<strlen(s1)-1;j++)
                    s1[j]=s1[j+1];
                s1[j]=c;
                for(j=0;s1[j]==s2[j]&&j<strlen(s1);j++);
                if(j==strlen(s1))
                {
                    printf("TWISTED STRINGS\n");
                    exit(0);
                }
            }
    printf("STRINGS ARE NOT TWISTED\n");
}
