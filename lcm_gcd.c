#include<stdio.h>
void main()
{
        int n1,n2,num1,num2,temp,lcm,gcd;
        printf("enter two numbers:");
        scanf("%d%d",&n1,&n2);
        num1=n1;
        num2=n2;
        while(num2!=0)
        {
                temp=num2;
                num2=num1%num2;
                num1=temp;
        }
        gcd=num1;
        lcm=(n1*n2)/gcd;
        printf("Greatest common divisor %d and %d=%d \n",n1,n2,gcd);
        printf("Lowest common divisor %d and %d=%d\n",n1,n2,lcm);
}
