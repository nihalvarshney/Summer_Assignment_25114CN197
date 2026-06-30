//mini project
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n) {
    printf("\nStudent Records:\n");
    for(int i=0; i<n; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

int main() {
    struct Student s[5];
    int n=5;
    for(int i=0; i<n; i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    display(s, n);
    return 0;
}
