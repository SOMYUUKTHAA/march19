#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,j,t,b;
    printf(" Enter string : ")
    scanf("%s",&str);
    b=strlen(str);
    for(i=0;i<b;i++)
    {
        for(j=i;j<b;j++)
        {   if(str[i]>str[j])
            {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%c",str[i]);
    }
}
