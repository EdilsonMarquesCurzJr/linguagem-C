#include <stdio.h>


main(){
    int p1=0,p2=1,p3=0,fb[1000],num=0;
    fb[0]=0;
    fb[1]=1;
    int achou=0;
    printf("Iforme o numero: ");
    scanf("%d",&num);
    for(int i=3;i<1000;i++){
        p3=p1+p2;
        fb[i]=p3;
        p1=p2;
        p2=p3;
    }
    for(int i=0;i<1000;i++){
        if(num==fb[i]){
            achou = 1;
        }
    }
    if(achou == 1){
        printf("esse numero existe na sequencia");
    }else{
        printf("esse numero nao existe na sequencia");
    }
}
