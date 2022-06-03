#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"portuguse");
    float tempc[7], tempf[7], aconc=0, aconf=0;
    int escolha=0, i=0, fim=1;
    while(fim!=0){
    printf("========MEDIDOR=========\n");
    printf("1 - Inserir temperaturas em graus Celsius\n");
    printf("2 - Exibir temperaturas\n");
    printf("3 - Limpar registro de temperaturas: \n");
    printf("4 - Exibir temperaturas em Fahrenheit\n");
    printf("5 - Exibir a média das temperaturas da semana\n");
    printf("===============================================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    system("cls");


         for(i=0;i<7;i++){
            aconc+=tempc[i];
            aconf+=tempf[i];
        if(escolha==1){
            printf("\nInforme a temperatura em graus celsius do dia %d da semana: ",i+1);
            scanf("%f",&tempc[i]);
        }
         if(escolha==2){
                printf("\nA temperatura em graus Celsius do dia %d da semana foi: %.2f",i+1, tempc[i]);
        }
         if(escolha==3){
             system("cls");
             tempc[i]=0;
             tempf[i]=0;

        }
         if(escolha==4){
                tempf[i]=(tempc[i]*9/5)+32;
                printf("\ntemperatura em graus Fahrenheit do dia %d da semana: %.2f", i+1,tempf[i]);
    }

    }
        if(escolha==5){
            printf("%f",aconc);
            printf("\nA media em graus celsius foi: %.2f",aconc/7);
            printf("\nA media em graus Fahrenheit foi: %.2f",aconf/7);
        }
    printf("\nDeseja finaliza o programa? se sim digite 0:");
    scanf("%d",&fim);
}
}
