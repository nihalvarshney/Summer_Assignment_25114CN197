//find largest prime factor
#include <stdio.h>
int main() 
{
    int n, i, largestPrime = -1, flag, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            flag = 0;
            for (j = 2; j <= i/2; j++) 
            {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) largestPrime = i;
        }
    }
    if (largestPrime != -1) 
    printf("Largest Prime Factor = %d", largestPrime);
    else
    printf("No prime factors found");
    return 0;
}
