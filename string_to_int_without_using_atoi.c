#include<stdio.h>
#include<string.h>
int  stringToInteger(char string[])
{
        int digit,j=1,m=0;
        for(int i=strlen(string)-1;i>=0;i--)
        {
                digit=string[i];
                digit=digit-48;
                m=m+(digit*j);
                j=j*10;
        }
        return m;
}
void main()
{
        char string[100];
        int integer;
        printf("enter any number:\n");
        scanf("%s",string);
        integer=stringToInteger(string);
        printf(" the value of integer is:%d\n",integer);
}
