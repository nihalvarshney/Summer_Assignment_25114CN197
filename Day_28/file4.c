//contact management system
#include <stdio.h>
struct Contact {
    int id;
    char name[50];
    char phone[15];
};
int main() {
    struct Contact c[20];
    int n=0, choice;
    while(1) {
        printf("\n1.Add Contact 2.List Contacts 3.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            printf("ID: "); scanf("%d",&c[n].id);
            printf("Name: "); scanf("%s",c[n].name);
            printf("Phone: "); scanf("%s",c[n].phone);
            n++;
        } else if(choice==2) {
            for(int i=0;i<n;i++)
                printf("%d %s %s\n",c[i].id,c[i].name,c[i].phone);
        } else if(choice==3) break;
    }
}
