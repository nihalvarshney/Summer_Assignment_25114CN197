//salary management system
#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};
int main() {
    struct Employee e[10];
    int n=0, choice;
    while(1) {
        printf("\n1.Add Employee 2.List Salaries 3.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            printf("ID: "); scanf("%d",&e[n].id);
            printf("Name: "); scanf("%s",e[n].name);
            printf("Basic Salary: "); scanf("%f",&e[n].basic);
            e[n].hra = 0.2 * e[n].basic;
            e[n].da  = 0.5 * e[n].basic;
            e[n].gross = e[n].basic + e[n].hra + e[n].da;
            n++;
        } else if(choice==2) {
            for(int i=0;i<n;i++)
                printf("%d %s Gross=%.2f\n",e[i].id,e[i].name,e[i].gross);
        } else if(choice==3) break;
    }
}
