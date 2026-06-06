//convert binary to decimal
#include <stdio.h>
#include <math.h>
int main() 
{
    long long binary;
    int decimal = 0, i = 0;
    printf("Enter binary number: ");
    scanf("%lld", &binary);
    while (binary != 0) 
    {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }
    printf("Decimal = %d", decimal);
    return 0;
}
