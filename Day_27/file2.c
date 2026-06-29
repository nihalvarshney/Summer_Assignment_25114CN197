//employ management system 
#include <stdio.h>
struct Employee { int id; char name[50]; float salary; };
int main() {
    struct Employee e[10]; int n=0, choice;
    while(1) {
        printf("\n1.Add Employee 2.List Employees 3.Exit\n"); scanf("%d",&choice);
        if(choice==1) {
            printf("ID: "); scanf("%d",&e[n].id);
            printf("Name: "); scanf("%s",e[n].name);
            printf("Salary: "); scanf("%f",&e[n].salary);
            n++;
        } else if(choice==2) {
            for(int i=0;i<n;i++) printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
        } else if(choice==3) break;
    }
}
