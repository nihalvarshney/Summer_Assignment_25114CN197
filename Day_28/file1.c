//library management system
#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char title[50];
    char author[50];
};
int main() {
    struct Book b[20];
    int n=0, choice;
    while(1) {
        printf("\n1.Add Book 2.List Books 3.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            printf("ID: "); scanf("%d",&b[n].id);
            printf("Title: "); scanf("%s",b[n].title);
            printf("Author: "); scanf("%s",b[n].author);
            n++;
        } else if(choice==2) {
            for(int i=0;i<n;i++)
                printf("%d %s %s\n",b[i].id,b[i].title,b[i].author);
        } else if(choice==3) break;
    }
}
