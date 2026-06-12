//pallindrome
#include <stdio.h>
int isPalindrome(int n) 
{
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == n);
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num)) {
    printf("%d is palindrome", num);}
    else { printf("%d is not palindrome", num);}
    return 0;
}
