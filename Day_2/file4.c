//product of digits
#include<stdio.h>
int main()
{
    int n,r,prd=1;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        prd = prd*r;
        n = n/10;
    }
    printf("product of digit= %d",prd);
    return 0;



}