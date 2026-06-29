//menu driven string operations system
#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; int choice;
    printf("Enter a string: "); scanf("%s",str);
    while(1) {
        printf("\n1.Length 2.Reverse 3.Uppercase 4.Lowercase 5.Exit\n");
        scanf("%d",&choice);
        if(choice==5) break;
        switch(choice) {
            case 1: printf("Length=%d\n",(int)strlen(str)); break;
            case 2: {int l=strlen(str); for(int i=l-1;i>=0;i--) printf("%c",str[i]); printf("\n");} break;
            case 3: for(int i=0;str[i];i++) printf("%c",toupper(str[i])); printf("\n"); break;
            case 4: for(int i=0;str[i];i++) printf("%c",tolower(str[i])); printf("\n"); break;
        }
    }
}
