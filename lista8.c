#include <stdio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL,"portuguse");
    int n=5;
    int v[n], maior=0, posicao[5], escolha=0 ,i=0, fim=1, valor=0;
    float media=0, acon=0;
    for(i=0; i<5; i++){
        printf("Informe 5 valores: ");
        scanf("%d", &v[i]);
        acon+=v[i];
        if(i==0){
            maior= v[i];
        }
        if(maior<v[i]){
            maior= v[i];
        }
    }
    media=acon/5;
    while(fim!=0){
    printf(" \n1)_O maior valor \n1) A média dos valores \n3)As posições em que existam valores ímpares \n4) Os valores dispostos em ordem inversa\n5)Buscar número: informe um número e o procure no vetor preenchido, retornando a posição e o valor desse número. (retorne -1 caso não encontre)\n6)Multiplique os valores pelo inverso de seu índice.\nescolha uma das opções: ");
    scanf("%d",&escolha);
    switch(escolha){
        case 1:
            printf("O maior valor %d",maior );
            break;

        case 2:
            printf("A média dos valores %.2f", media);
            break;

        case 3:
            printf("\nPosições dos valores ímpares");
            for(i=0; i<5; i++){
                if(v[i]%2 !=0){
                posicao[i]=i;
                printf(" \n%d", posicao[i]);
            }
            }
            break;
        case 4:
            printf("Os valores dispostos em ordem inversa");
            for( i=5-1; i>=0; i--){
            printf("\n%d, ",v[i] );
            }
            break;
        case 5:
            printf("\nBusque um valor: ");
            scanf("%d", &valor );
            for(i=0; i<5; i++){
                posicao[i]=i;
                if(valor==v[i]){
                    printf("\n%d está na posição %d ", v[i], posicao[i]);
                }
            }
            if(valor==v[0] ||valor==v[1] ||valor==v[2] ||valor==v[3] ||valor==v[4]){
            printf("\n valor foi encontrado");
            }
            else{
                printf("\nO valor que foi retornando foi : %d", -1);
            }
            break;
        case 6:
            printf("multiplicando pelo inverso dos seus índice ");
            for(i=0; i<5; i++){
                printf("\n%d", v[i]*(-1* i));
            }
            break;
        default:
            printf("\nvalor invalidao");
            break;

        }
    printf("\nDeseja realizar uma nova operação? se não digite 0: ");
    scanf("%d", &fim);
    }
    printf("\nO programa foi incerrado");
}
