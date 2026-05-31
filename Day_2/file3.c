//to check a number is pallindrome or not 
#include<stdio.h>
int main()
{
    int rev=0,n,n1,r;
    printf("enter a number:");
    scanf("%d",&n);
    n1 = n;
    while(n>0)
    {
        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    if(n1==rev)
    {
        printf("the number is pallindrome");
    }
    else
    {
        printf("the number is not pallindrome");
    }
    return 0;


}