//diagonal sum of elements
#include <stdio.h>
int main() {
    int a[10][10], r, c, sum=0;
    printf("Enter rows and columns (square matrix): ");
    scanf("%d %d", &r, &c);

    if(r!=c) {
        printf("Matrix must be square!\n");
        return 0;
    }

    printf("Enter elements of matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
        sum += a[i][i];  // main diagonal

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
