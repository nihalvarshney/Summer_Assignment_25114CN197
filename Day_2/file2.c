//reverse of a number
#include<stdio.h>
int main()
{
    int rev=0,n,r;
    printf("enter a number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    printf("reverse of a number = %d",rev);


}