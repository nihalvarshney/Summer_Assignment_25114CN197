//count vowel and consonent
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100]; int v=0,c=0,i;
    gets(str);
    for(i=0;str[i];i++){
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("Vowels=%d Consonants=%d\n",v,c);
    return 0;
}
