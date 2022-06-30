#include<stdio.h>
int main()
{
        int a[100],b[100],c[100];
        int *p;
        int n1, n2, n3, i, j;
        p=&c[i];
        printf("\n Enter the number of elements for  First Array  :  ");
        scanf("%d", &n1);     //Array Size Declaration
        printf("\nEnter the elements for First Array :  ");
        for(i = 0; i < n1; i++)
        {
                scanf("%d", &a[i]);
        }
        printf("\n Enter the number of elements for  Second Array  :  ");
        scanf("%d", &n2);    //Array Size Declaration
        printf("\nEnter the elements for Second Array  :  ");
        for(i = 0; i < n2; i++)
        {
                scanf("%d", &b[i]);
        }
        n3 = n1 + n2;
        for(i = 0; i < n1; i++)
        {
                c[i] = a[i];
        }
        for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
        {
                c[j] = b[i];
        }
        printf("\n a[%d] Array Elements After Merging \n", n3);
        for(i = 0; i < n3; i++)
        {
                printf(" %d \t ",*p);
        }
        return 0;
}
                                                                                                                            1,16          Top

