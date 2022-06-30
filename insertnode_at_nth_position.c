#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node *head=NULL;
void insert()
{
        struct node *newnode;
        int n,i;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        printf("enter the position:\n");
        scanf("%d",&n);
        if(n==1)
        {
                newnode->next=head;
                head=newnode;
        }
        else
        {
                struct node *temp=head;
                for(i=1;i<n-1;i++)
                {
                        temp=temp->next;
                }
                newnode->next=temp->next;
                temp->next=newnode;
        }
}
void display()
{
        struct node *newnode;
        newnode=head;
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
                printf("\ndo you want to continue(0,1)?");
                scanf("%d",&ch);
                printf("\n");
        }
        while(ch);
        return 0;
}

            
