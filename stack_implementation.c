#include<stdio.h>
#define MAX 10
void push(int data[],int num,int *top)
{
        if(*top==MAX-1)
                printf("\nstack is full");
        else
        {
                *top+=1;
                data[*top]=num;
        }
}
int pop(int data[],int *top)
{
        int n=0;
        if(*top==-1)
                printf("\nstack is empty");
        else
        {
                n=data[*top];
                *top-=1;
        }
        return n;
}
void display(int data[],int *top)
{
        if(*top==-1)
                printf("\nstack is empty");
        else
        {
                printf("\nstack is:");
                for(int i=*top;i>=0;i--)
                        printf("%d\n",data[i]);
        }
}
int main()
{
        int stack[MAX],top=-1,choice,val;
        do
        {
                printf("\npress 1-push \npress 2-pop \npress 3-display \npress 4-exit");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                printf("enter the value to insert:\n");
                                scanf("%d",&val);
                                push(stack,val,&top);
                                break;
                        case 2:
                                val=pop(stack,&top);
                                printf("the value removed is:%d\n",val);
                                break;
                        case 3:
                                display(stack,&top);
                                break;
                }
        }
        while(choice!=4);
                return 0;
}
