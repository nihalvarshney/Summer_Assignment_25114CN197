//count set bit in a number
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n) 
    {
        count += n & 1;
        n >>= 1;
    }
    printf("Set bits = %d", count);
    return 0;
}

