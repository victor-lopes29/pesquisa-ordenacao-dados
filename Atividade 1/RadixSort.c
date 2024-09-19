#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int radixSort(char nome[], int TAM){

	char palavra [80], c;
	char nomeArquivo[255];
	int x, y, aux,z;

	int *vet;
	sprintf(nomeArquivo, "%s-%07d.txt",nome,TAM);
	vet = (int*)malloc(TAM *sizeof(int));
	FILE *arquivo = NULL;
	FILE *tempoArq = NULL;
	arquivo = fopen(nomeArquivo, "r");
	if (arquivo == NULL)
		printf("Erro ao abrir para leitura");
	else {
   		x=0;
		while (!feof(arquivo)) {
			fgets(palavra, 255, arquivo);
			vet[x]=atoi(palavra);
			x++;
		}
   }
	/*
	int TAM, x, *vet, y, aux;
	vet = (int*)malloc(TAM *sizeof(int));
	char palavra [80], c;
	/*Dados
	TAM=500;
	char nome [80] = "Randomico";
	/*--- Construtor de vetor ---*/
	fclose(arquivo);
	for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
	/*--- Clock + Radix sort ---*/
	clock_t inicio = clock();
//---------------------------------------------------------------------------------------------------------------------------------------------------
    int i;
    int *b;
    int maior = vet[0];
    int exp = 1;

    b = (int *)calloc(TAM, sizeof(int));

    for (i = 0; i < TAM; i++) {
        if (vet[i] > maior)
    	    maior = vet[i];
    }

    while (maior/exp > 0) {
        int bucket[10] = { 0 };
    	for (i = 0; i < TAM; i++)
    	    bucket[(vet[i] / exp) % 10]++;
    	for (i = 1; i < 10; i++)
    	    bucket[i] += bucket[i - 1];
    	for (i = TAM - 1; i >= 0; i--)
    	    b[--bucket[(vet[i] / exp) % 10]] = vet[i];
    	for (i = 0; i < TAM; i++)
    	    vet[i] = b[i];
    	exp *= 10;
    }

    free(b);

//---------------------------------------------------------------------------------------------------------------------------------------------------
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
    char nomet [80] = "Radix";
	char nomeArquivot[255];
	sprintf(nomeArquivot, "%s - %s.txt",nome,nomet);
	tempoArq = fopen(nomeArquivot, "a");
    fprintf(tempoArq,"TEMPO %7d = %.4f\n\n",TAM, tempo);
    printf("\n\nTEMPO %7d = %.4f\n\n",TAM, tempo);


}



