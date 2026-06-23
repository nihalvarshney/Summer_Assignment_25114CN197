//row wise sum
#include <stdio.h>
int main() {
    int a[10][10], n, i, j, sum;
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    for(j=0;j<n;j++) 
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    { 
        sum=0; 
        for(j=0;j<n;j++) 
        sum+=a[i][j]; 
        printf("Row %d sum=%d\n",i+1,sum); 
    }
    return 0;
}
