#include<stdio.h>
#include<stdlib.h>
struct arr{
    char word[20];
    int freq;
};
typedef struct arr arr;
void main()
{
    arr a[50];
    char b[100],c[20];
    int i,j,x,y,k;
    printf("Enter the string\n");
    gets(b);
    for(i=0,x=0,y=0;i<strlen(b);i++,x++,y=0)
    {
        for(;b[i]!=' '&&b[i]!='\0';i++)
            c[y++]=b[i];
        c[y]='\0';
        strcpy(a[x].word,c);
        a[x].freq=1;
    }
    for(i=0;i<x-1;i++)
        for(j=i+1;j<x;j++)
            if(strlen(a[i].word)==strlen(a[j].word)&&a[j].freq!=-1)
            {
                for(k=0;a[i].word[k]==a[j].word[k]&&k<strlen(a[i].word);k++);
                if(k==strlen(a[i].word))
                {
                    (a[i].freq)++;
                    a[j].freq=-1;
                }

            }
    for(i=0;i<x;i++)
        if(a[i].freq!=-1)
            printf("\nWord : %s , Frequency : %d\n",a[i].word,a[i].freq);

}
