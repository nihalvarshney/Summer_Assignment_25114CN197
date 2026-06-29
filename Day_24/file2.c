//compress a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int i=0;
    while(str[i]) {
        char c = str[i];
        int count=0;
        while(str[i]==c) { count++; i++; }
        printf("%c%d", c, count);
    }
}
