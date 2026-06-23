//count words in a sentence
#include <stdio.h>
#include <string.h>
int main() {
    char str[200]; int i,count=0;
    gets(str);
    for(i=0;str[i];i++)
    if(str[i]==' '&&str[i+1]!=' '&&str[i+1]!='\0') 
    count++;
    printf("Words=%d\n",count+1);
    return 0;
}
