#include <stdio.h>

main(){
    float SP = 67836.43;
    float RJ = 36678.66;
    float MG = 29229.88;
    float ES = 27165.48;
    float Outros = 19849.53;
    float total = SP+RJ+MG+ES+Outros;
    SP=(SP*100)/total;
    RJ=(RJ*100)/total;
    MG=(MG*100)/total;
    ES=(ES*100)/total;
    Outros=(Outros*100)/total;
    printf("Pecentual de SP: %.2f\n",SP);
    printf("Pecentual de RJ: %.2f\n",RJ);
    printf("Pecentual de MG: %.2f\n",MG);
    printf("Pecentual de EP: %.2f\n",ES);
    printf("Pecentual de Outros: %.2f",Outros);
}
