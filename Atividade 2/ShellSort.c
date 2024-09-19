#include<time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int shellSort(char nome[], int TAM){

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
	/*--- Clock + Insertion sort ---*/
	clock_t inicio = clock();
//---------------------------------------------------------------------------------------------------------------------------------------------------
       int h, j, p;
       for(h = 1; h < TAM; h = (3*h)+1);
       while(h > 0){
        h = (h-1)/3;
        for(p = h; p < TAM; p++){
            aux = vet[p];
            j = p;
            while(vet[j-h] > aux){
                vet[j] = vet[j - h];
                j -= h;
                if(j < h)
                    break;
                }
             vet[j] = aux;
            }
       }

//---------------------------------------------------------------------------------------------------------------------------------------------------
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
    char nomet [80] = "Shell";
	char nomeArquivot[255];
	sprintf(nomeArquivot, "%s - %s.txt",nome,nomet);
	tempoArq = fopen(nomeArquivot, "a");
    fprintf(tempoArq,"TEMPO %7d = %.4f\n\n",TAM, tempo);
    printf("\n\nTEMPO %7d = %.4f\n\n",TAM, tempo);


}


