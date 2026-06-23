//column wise sum
#include <stdio.h>
int main() {
    int a[10][10], n, i, j, sum;
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    for(j=0;j<n;j++) 
    scanf("%d",&a[i][j]);
    for(j=0;j<n;j++)
    { 
        sum=0;
        for(i=0;i<n;i++) 
        sum+=a[i][j]; 
        printf("Col %d sum=%d\n",j+1,sum); 
    }
    return 0;
}
