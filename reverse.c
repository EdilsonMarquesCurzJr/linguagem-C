#include <stdio.h>

main(){
    char palavra[100];
    printf("Imforme a palavra: ");
    gets(palavra);
    strlen(palavra);
    for(int i=strlen(palavra);i>=0;i--){
        printf("%c",palavra[i]);
    }

}
