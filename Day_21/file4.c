//convert lowercase to upper case
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100]; int i;
    gets(str);
    for(i=0;str[i];i++) printf("%c",toupper(str[i]));
    return 0;
}
