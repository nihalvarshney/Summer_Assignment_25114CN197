//multiplication of a given number
#include<stdio.h>
int main()
{
    int n,i,num;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        num = n*i;
        printf("%d\n",num);

    }
    return 0;
}