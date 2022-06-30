#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node *start=NULL;
void insert()
{
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\n enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
                start=newnode;
        }
        else
        {
                newnode->next=start;
                start=newnode;
        }
}
void display()
{
        struct node *newnode;
        newnode=start;
        printf("the linked list is:");
        while(newnode!=NULL)
        {
                printf("%d--->",newnode->data);
                newnode=newnode->next;
        }
        printf("NULL");
}
int main()
{
        int ch;
        do
        {
                insert();
                display();
                printf("\n do you want to continue(0,1)?");
                scanf("%d",&ch);
        }
        while(ch);
        return 0;
}        
        

