//ticket management system
#include <stdio.h>
struct Ticket {
    int id;
    char passenger[50];
    char destination[50];
};
int main() {
    struct Ticket t[20];
    int n=0, choice;
    while(1) {
        printf("\n1.Book Ticket 2.List Tickets 3.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            printf("Ticket ID: "); scanf("%d",&t[n].id);
            printf("Passenger Name: "); scanf("%s",t[n].passenger);
            printf("Destination: "); scanf("%s",t[n].destination);
            n++;
        } else if(choice==2) {
            for(int i=0;i<n;i++)
                printf("%d %s %s\n",t[i].id,t[i].passenger,t[i].destination);
        } else if(choice==3) break;
    }
}
