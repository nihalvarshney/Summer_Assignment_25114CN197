//find commonn characters in string
#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int freq[256]={0};
    scanf("%s%s",s1,s2);
    for(int i=0;s1[i];i++) freq[(unsigned char)s1[i]]=1;
    for(int i=0;s2[i];i++) if(freq[(unsigned char)s2[i]]) printf("%c ",s2[i]);
}
