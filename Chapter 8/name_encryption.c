#include <stdio.h>
#include <string.h>

int main(){
    char str[]="Sarthak Bhandari";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }
    printf("%s\n",str);

    for (int j = 0; j < strlen(str); j++)
    {
        str[j]=str[j]-1;
    }
    printf("%s\n",str);
    
    
    return 0;
}