//count a digit of a number
#include<stdio.h>
int main()
{
    int n,i,count =0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count = count + 1;
      
        
    }
    printf("no of digit i a number is %d",count);
    return 0;

}