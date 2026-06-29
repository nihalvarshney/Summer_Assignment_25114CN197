//find longest word in a sentence
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50]="";
    fgets(str,200,stdin);
    int i=0;
    while(sscanf(str+i,"%s",word)==1) {
        if(strlen(word)>strlen(longest)) strcpy(longest,word);
        i += strlen(word)+1;
    }
    printf("Longest word: %s", longest);
}
