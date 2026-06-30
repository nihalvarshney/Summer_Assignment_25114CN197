//mini library system
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[3];
    int i;
    for(i=0; i<3; i++) {
        printf("Enter id, title, author: ");
        scanf("%d %s %s", &b[i].id, b[i].title, b[i].author);
    }
    printf("\nLibrary Records:\n");
    for(i=0; i<3; i++) {
        printf("%d %s %s\n", b[i].id, b[i].title, b[i].author);
    }
    return 0;
}
