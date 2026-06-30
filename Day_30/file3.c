//mini employ management system
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[4];
    int i;
    for(i=0; i<4; i++) {
        printf("Enter id, name, salary: ");
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }
    printf("\nEmployee Records:\n");
    for(i=0; i<4; i++) {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}
