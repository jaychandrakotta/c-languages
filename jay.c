#include<stdio.h>
int main()
{
    int i,num;
    printf("enter the table no.:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d \n",num,i,(num*i));
    }
    return 0;
}