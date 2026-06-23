//first leaving character
#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; int freq[256]={0},i;
    gets(str);
    for(i=0;str[i];i++){
    if(freq[(unsigned char)str[i]]==1)
        {
        printf("%c\n",str[i]); 
        break; 
         }
        freq[(unsigned char)str[i]]++;
    }
    return 0;
}
