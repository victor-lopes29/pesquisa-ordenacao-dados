#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//void merge(int vet[],int p,int q,int r) {
//    int i, j ,k;
//    int aux[r];
//
//    for(i = q+1; i > p; i--)
//        aux[i-1] = vet[i-1];
//    for (j = q; j < r; j++)
//        aux[r+q-j] = vet[j+1];
//
//    for (k = p; k <= r; k++){
//        if (aux[j] < aux[i])
//            vet[k] = aux[j--];
//        else
//            vet[k] = aux[i++];
//}
//
//
//
//}

void merge(int arr[], int p, int q, int r) {
    int i, j, k;
    int n1 = q - p + 1;
    int n2 =  r - q;

    int *L, *R;
    L = (int*)malloc(n1 *sizeof(int));
    R = (int*)malloc(n2 *sizeof(int));

    for (i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[q + 1+ j];

    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    free(L);
    free(R);
}
void mergeSortRec(int vet[],int p,int r){
    if (p < r) {
        int q = (p+r)/2;

        mergeSortRec(vet, p, q);
        mergeSortRec(vet, q+1, r);
        merge(vet, p, q, r);
    }
}

int mergeSort(char nome[],int TAM){

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
	/*--- Clock + Merge sort ---*/
	clock_t inicio = clock();
//---------------------------------------------------------------------------------------------------------------------------------------------------

        mergeSortRec(vet, 0, TAM);

//---------------------------------------------------------------------------------------------------------------------------------------------------
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
    char nomet [80] = "Merge";
	char nomeArquivot[255];
	sprintf(nomeArquivot, "%s - %s.txt",nome,nomet);
	tempoArq = fopen(nomeArquivot, "a");
    fprintf(tempoArq,"TEMPO %7d = %.4f\n\n",TAM, tempo);
    printf("\n\nTEMPO %7d = %.4f\n\n",TAM, tempo);


}



