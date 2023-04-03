#include <stdio.h>
#include <stdlib.h>

void memoryCopy (char *arqv[]){
    FILE *arq1, *arq2;
    char *str;
    if(!(str = malloc(1024)))
        return;
    arq1 = fopen(arqv[1], "r");
    if(!arq1){
        perror("Occorreu um erro ao abrir os arquivos");
        return;
    }
    // copia o arquivo para uma string
    fread(str, 1024, 1024, arq1);

    fclose(arq1);

    arq2 = fopen(arqv[2], "w");
    if(!arq2){
        perror("Occorreu um erro ao abrir os arquivos");
        return;
    }
    // copia uma string para outro arquivo 
    fputs(str, arq2);

    fclose(arq2);

    free(str);

}

void boulderDash (char *arqv[]){
    FILE *arq;
    char map[50][50];

    arq = fopen(arqv[1], "r");

}


int main(int arqc, char *arqv[]) {

    // memoryCopy(arqv);
    boulderDash(arqv);

    return 0;
   
}
