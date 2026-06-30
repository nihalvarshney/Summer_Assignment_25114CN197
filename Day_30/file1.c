//student record system
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;
    for(i=0; i<5; i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\nStudent Records:\n");
    for(i=0; i<5; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}
