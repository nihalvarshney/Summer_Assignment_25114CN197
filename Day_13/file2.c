//sum and avg of array
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\nAverage = %.2f", sum, (float)sum/n);
    return 0;
}
