//remove spaces
#include <stdio.h>
int main() {
    char str[200]; int i;
    gets(str);
    for(i=0;str[i];i++)
    if(str[i]!=' ') 
    printf("%c",str[i]);
    return 0;
}
