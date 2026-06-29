//inventory management systen
#include <stdio.h>
struct Item {
    int id;
    char name[50];
    int quantity;
};
int main() {
    struct Item items[20]; int n=0, choice;
    while(1) {
        printf("\n1.Add Item 2.List Items 3.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            printf("ID: "); scanf("%d",&items[n].id);
            printf("Name: "); scanf("%s",items[n].name);
            printf("Quantity: "); scanf("%d",&items[n].quantity);
            n++;
        } else if(choice==2) {
            for(int i=0;i<n;i++)
                printf("%d %s %d\n",items[i].id,items[i].name,items[i].quantity);
        } else if(choice==3) break;
    }
}
