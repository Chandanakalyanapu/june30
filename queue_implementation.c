#include<stdio.h>
#define max 5
int front=-1,rear=-1;
void addq(int queue[],int value);
int delq(int queue[]);
void main()
{
        int q[max];
        int k,n=0;
        while(n!=3)
        {
                printf("1.add element into the queue\n");
                printf("2.delete element from the queue\n");
                printf("3.quit\n");
                printf("enter your choice 1/2/3:");
                scanf("%d",&n);
                switch(n)
                {
                        case 1:
                                if(rear>max-1)
                                        printf("sorry queue is full\n");
                                else
                                {
                                        printf("enter the value to add:");
                                        scanf("%d",&k);
                                        addq(q,k);
                                        printf("%d is added to the queue\n",k);
                                }
                                break;
                        case 2:
                                k=delq(q);
                                if(k!='#')
                                        printf("value deleted from queue:%d\n",k);
                                break;
                }
        }
}
void addq(int queue[],int value)
{
        rear++;
        queue[rear]=value;
        if(front==-1)
                front=rear;
}
int delq(int queue[])
{
        int j;
        if(front==-1)
        {
                printf("sorry queue is empty\n");
        return '#';
        }
        else
        {
                if(front==rear)
                {
                        j=queue[front];
                        front=-1;
                        rear=-1;
                }
                else
                {
                        j=queue[front];
                        front++;
                }
                return j;
        }
}
