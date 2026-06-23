//check anagram strings
#include <stdio.h>
#include <string.h>
int main() {
    char s1[100],s2[100]; int freq[256]={0},i;
    gets(s1); gets(s2);
    for(i=0;s1[i];i++) freq[(unsigned char)s1[i]]++;
    for(i=0;s2[i];i++) freq[(unsigned char)s2[i]]--;
    for(i=0;i<256;i++) if(freq[i]!=0){ printf("Not anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}
