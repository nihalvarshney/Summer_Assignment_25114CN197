//remove duplicate characters
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[100]="";
    int freq[256]={0};
    scanf("%s", str);
    for(int i=0; str[i]; i++) {
        if(!freq[(unsigned char)str[i]]) {
            freq[(unsigned char)str[i]]=1;
            strncat(result,&str[i],1);
        }
    }
    printf("%s", result);
}
