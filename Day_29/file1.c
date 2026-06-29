//menu driven calculator
#include <stdio.h>
int main() {
    int choice; float a,b;
    while(1) {
        printf("\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\n");
        scanf("%d",&choice);
        if(choice==5) break;
        printf("Enter two numbers: "); scanf("%f%f",&a,&b);
        switch(choice) {
            case 1: printf("Sum=%.2f\n",a+b); break;
            case 2: printf("Diff=%.2f\n",a-b); break;
            case 3: printf("Prod=%.2f\n",a*b); break;
            case 4: if(b!=0) printf("Quot=%.2f\n",a/b); else printf("Divide by zero!\n"); break;
        }
    }
}
