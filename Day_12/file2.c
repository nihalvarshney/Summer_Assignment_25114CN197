//print armstrong
#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) 
    {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return (sum == n);
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    printf("%d is Armstrong", num);
    else 
    printf("%d is not Armstrong", num);
    return 0;
}

