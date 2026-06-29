//voting system
#include <stdio.h>

int main() {
    int votesA=0, votesB=0, choice;
    for(int i=0;i<5;i++) {
        printf("Vote for Candidate (1=A, 2=B): ");
        scanf("%d",&choice);
        if(choice==1) votesA++;
        else if(choice==2) votesB++;
    }
    if(votesA>votesB) printf("Candidate A wins!\n");
    else if(votesB>votesA) printf("Candidate B wins!\n");
    else printf("It's a tie!\n");
}
