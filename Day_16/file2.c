//maximum frequency element
#include <stdio.h>
int main() {
    int n,i,j,max=0,element;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        int count=0;
        for(j=0;j<n;j++) if(arr[i]==arr[j]) count++;
        if(count>max) { max=count; element=arr[i]; }
    }
    printf("Max freq element = %d",element);
    return 0;
}
