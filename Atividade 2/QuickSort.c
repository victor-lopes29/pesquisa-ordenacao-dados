#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void trocaValor(int vet[], int i, int j)
{
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int particiona(int vet[],int p,int r) {
    int pivo, pivoIndice, i;

    pivo = vet[r];
    pivoIndice = p;

    for(i = p; i < r; i++)
    {
        if(vet[i] <= pivo)
        {
            trocaValor(vet, i, pivoIndice);
            pivoIndice++;
        }
    }

    trocaValor(vet, pivoIndice, r);
    return pivoIndice;

}

int particionaRand(int vet[], int p, int r)
{
    int pivoIndice = (rand() % (r - p + 1)) + p;

    trocaValor(vet, pivoIndice, r);

    return particiona(vet, p, r);
}

void quickSortRec(int vet[],int p,int r){
    if (p < r) {
        int pivoIndice = particionaRand(vet,p,r);

        quickSortRec(vet, p, pivoIndice - 1);
        quickSortRec(vet, pivoIndice + 1, r);
    }
}

int quickSort(char nome[],int TAM){

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

	/*--- Construtor de vetor ---*/
	fclose(arquivo);
	for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
	/*--- Clock + Quick sort ---*/
	clock_t inicio = clock();
//---------------------------------------------------------------------------------------------------------------------------------------------------

        quickSortRec(vet, 0, TAM);

//---------------------------------------------------------------------------------------------------------------------------------------------------
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
    char nomet [80] = "Quick";
	char nomeArquivot[255];
	sprintf(nomeArquivot, "%s - %s.txt",nome,nomet);
	tempoArq = fopen(nomeArquivot, "a");
    fprintf(tempoArq,"TEMPO %7d = %.4f\n\n",TAM, tempo);
    printf("\n\nTEMPO %7d = %.4f\n\n",TAM, tempo);


}




