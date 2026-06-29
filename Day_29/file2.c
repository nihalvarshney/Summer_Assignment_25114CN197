//menu driven array operations system
#include <stdio.h>
int main() {
    int arr[50],n,choice;
    printf("Enter size of array: "); scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    while(1) {
        printf("\n1.Display 2.Sum 3.Max 4.Min 5.Exit\n");
        scanf("%d",&choice);
        if(choice==5) break;
        switch(choice) {
            case 1: for(int i=0;i<n;i++) printf("%d ",arr[i]); break;
            case 2: {int sum=0; for(int i=0;i<n;i++) sum+=arr[i]; printf("Sum=%d\n",sum);} break;
            case 3: {int max=arr[0]; for(int i=1;i<n;i++) if(arr[i]>max) max=arr[i]; printf("Max=%d\n",max);} break;
            case 4: {int min=arr[0]; for(int i=1;i<n;i++) if(arr[i]<min) min=arr[i]; printf("Min=%d\n",min);} break;
        }
    }
}
