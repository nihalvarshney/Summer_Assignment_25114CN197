//marsheet generation system 
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks[5];
    float total, percent;
};
int main() {
    struct Student s[10];
    int n=0, choice;
    while(1) {
        printf("\n1.Add Student 2.Generate Marksheet 3.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            printf("Roll: "); scanf("%d",&s[n].roll);
            printf("Name: "); scanf("%s",s[n].name);
            s[n].total=0;
            for(int i=0;i<5;i++) {
                printf("Marks in subject %d: ",i+1);
                scanf("%f",&s[n].marks[i]);
                s[n].total += s[n].marks[i];
            }
            s[n].percent = s[n].total/5;
            n++;
        } else if(choice==2) {
            for(int i=0;i<n;i++) {
                printf("\nRoll: %d Name: %s\n",s[i].roll,s[i].name);
                printf("Total=%.2f Percent=%.2f%%\n",s[i].total,s[i].percent);
                if(s[i].percent>=60) printf("Result: First Division\n");
                else if(s[i].percent>=45) printf("Result: Second Division\n");
                else if(s[i].percent>=33) printf("Result: Third Division\n");
                else printf("Result: Fail\n");
            }
        } else if(choice==3) break;
    }
}
