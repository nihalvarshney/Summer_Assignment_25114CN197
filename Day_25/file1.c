//merge two sorted array
#include <stdio.h>
int main() {
    int a[50], b[50], c[100], n1,n2,i=0,j=0,k=0;
    scanf("%d%d",&n1,&n2);
    for(int x=0;x<n1;x++) scanf("%d",&a[x]);
    for(int x=0;x<n2;x++) scanf("%d",&b[x]);
    while(i<n1 && j<n2) c[k++] = (a[i]<b[j])?a[i++]:b[j++];
    while(i<n1) c[k++]=a[i++];
    while(j<n2) c[k++]=b[j++];
    for(int x=0;x<k;x++) printf("%d ",c[x]);
}
