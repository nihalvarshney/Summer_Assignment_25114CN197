//factorial by recursion
#include<stdio.h>
int fact(int n);
int main()
{
    printf("factorial = %d",fact(9));
    
    return 0;
}
//recursive function
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = n*factNm1;

}

