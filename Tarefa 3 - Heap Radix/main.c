#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>



int bubbleSort(char nome[],int TAM){

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
	
	fclose(arquivo);
	for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
	/*--- Clock + Bubble sort ---*/
	clock_t inicio = clock();
//---------------------------------------------------------------------------------------------------------------------------------------------------
    for( x = 0; x < TAM; x++ )
	{
		for( y = x + 1; y < TAM; y++ ) // sempre 1 elemento à frente
    	{
      		if ( vet[y] < vet[x] )
      		{
      		  	aux = vet[y];
      		  	vet[y] = vet[x];
      		  	vet[x] = aux;
    		}
		}
	}
//---------------------------------------------------------------------------------------------------------------------------------------------------
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
    char nomet [80] = "Bubble";
	char nomeArquivot[255];
	sprintf(nomeArquivot, "%s - %s.txt",nome,nomet);
	tempoArq = fopen(nomeArquivot, "a");
    fprintf(tempoArq,"TEMPO %7d = %.4f\n\n",TAM, tempo);
    printf("\n\nTEMPO %7d = %.4f\n\n",TAM, tempo);

}

int insertionSort(char nome[], int TAM){

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
    for (x = 1; x <TAM; x++)
   {
       aux = vet[x];
       y = x-1;
       while (y >= 0 && vet[y] > aux)
       {
           vet[y+1] = vet[y];
           y = y-1;
       }
       vet[y+1] = aux;
   }
//---------------------------------------------------------------------------------------------------------------------------------------------------
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
    char nomet [80] = "Insertion";
	char nomeArquivot[255];
	sprintf(nomeArquivot, "%s - %s.txt",nome,nomet);
	tempoArq = fopen(nomeArquivot, "a");
    fprintf(tempoArq,"TEMPO %7d = %.4f\n\n",TAM, tempo);
    printf("\n\nTEMPO %7d = %.4f\n\n",TAM, tempo);


}

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

int selectionSort(char nome[], int TAM){

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
        int o, p, min;
        for (o = 0; o < (TAM-1); o++)
        {
            min = o;
                for (p = (o+1); p < TAM; p++) {
                    if(vet[p] < vet[min])
                    min = p;
                }
                if (vet[o] != vet[min]) {
                    aux = vet[o];
                    vet[o] = vet[min];
                    vet[min] = aux;
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


void merge(int vet[], int comeco, int meio, int fim) {
    int i, j, k;
    int vetAux[fim];


    for(i = meio+1; i > comeco; i--)
        vetAux[i-1] = vet[i-1];
    for(j = meio; j < fim; j++)
        vetAux[fim+meio-j] = vet[j + 1];
    for (k = comeco; k <= fim; k++){
        if(vetAux[j] < vetAux[i])
            vet[k] = vetAux[j--];
        else
            vet[k] = vetAux[i++];
    }


}

void mergeSortRec(int vet[], int x, int TAM)
{
    if (x < TAM) {
        int meio = (TAM+x)/2;

        mergeSortRec(vet, x, meio);
        mergeSortRec(vet, meio+1, TAM);
        merge(vet, x, meio, TAM);
    }
}

int mergeSort(char nome[], int TAM){

	char palavra [80], c;
	char nomeArquivo[255];
	int x, y, aux,z, i;

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
        i = 1;
        mergeSortRec(vet,i,TAM+1);

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


void pen(int *vet, int raiz, int fundo) {
	int pronto, filhoMax, tmp;

	pronto = 0;
	while ((raiz*2 <= fundo) && (!pronto)) {
		if (raiz*2 == fundo) {
			filhoMax = raiz * 2;
		}
		else if (vet[raiz * 2] > vet[raiz * 2 + 1]) {
			filhoMax = raiz * 2;
		}
		else {
			filhoMax = raiz * 2 + 1;
		}

	if (vet[raiz] < vet[filhoMax]) {
		tmp = vet[raiz];
		vet[raiz] = vet[filhoMax];
		vet[filhoMax] = tmp;
		raiz = filhoMax;
    }
	else {
      pronto = 1;
	}
  }
}

int heapSort(char nome[], int TAM){

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
    int i, tmp;
    for(i = (TAM / 2); i >= 0; i--){
        pen(vet, i , TAM - 1);
    }
    for(i = TAM - 1; i >= 1; i--){
        tmp = vet[0];
        vet[0] = vet[i];
        vet[i] = tmp;
        pen(vet, 0, i - 1);
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    for(x=0;x<TAM;x++){
		printf("%10d",vet[x]);
		if((x%10)-9==0)
			printf("\n");
	}
    char nomet [80] = "Heap";
	char nomeArquivot[255];
	sprintf(nomeArquivot, "%s - %s.txt",nome,nomet);
	tempoArq = fopen(nomeArquivot, "a");
    fprintf(tempoArq,"TEMPO %7d = %.4f\n\n",TAM, tempo);
    printf("\n\nTEMPO %7d = %.4f\n\n",TAM, tempo);

}


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


int main(){
	system("color F9");
    char nome[80];
    int p;
    int a = 0;
    int x = 0;
    int TAM;
    while (a == 0){
        printf("\n MENU \n 1- Bubble Sort \n 2- Insertion Sort\n 3- Shell Sort \n 4- Selection Sort \n 5- Merge Sort \n 6- Quick Sort \n 7- Heap Sort \n 8- Radix Sort \n");
        scanf("%d", &p);
        switch(p){     

                case 1:
                    fflush(stdin);
                    
                    bubbleSort("Ordenado", 500000);
                    bubbleSort("Ordenado", 1000000);
                    bubbleSort("Invertido", 500000);
                    bubbleSort("Invertido", 1000000);
                    bubbleSort("Randomico", 500000);
                    bubbleSort("Randomico", 1000000);
                    
                    break;
                    
                case 2:
                    fflush(stdin);
                    insertionSort("Ordenado", 500000);
                    insertionSort("Ordenado", 1000000);
                    insertionSort("Invertido", 500000);
                    insertionSort("Invertido", 1000000);
                    insertionSort("Randomico", 500000);
                    insertionSort("Randomico", 1000000);
                    break;
                
                case 3:
                    fflush(stdin);
                    shellSort("Ordenado", 500000);
                    shellSort("Ordenado", 1000000);
                    shellSort("Invertido", 500000);
                    shellSort("Invertido", 1000000);
                    shellSort("Randomico", 500000);
                    shellSort("Randomico", 1000000);
                    break;
                
                case 4:
                    fflush(stdin);
                    selectionSort("Ordenado", 500000);
                   // selectionSort("Ordenado", 1000000);
                   //selectionSort("Invertido", 500000);
                   //selectionSort("Invertido", 1000000);
                   //selectionSort("Randomico", 500000);
                   //selectionSort("Randomico", 1000000);
                    break;
                
                case 5:
                    fflush(stdin);
                    mergeSort("Ordenado", 500000);
                    mergeSort("Ordenado", 1000000);
                    mergeSort("Invertido", 500000);
                    mergeSort("Invertido", 1000000);
                    mergeSort("Randomico", 500000);
                    mergeSort("Randomico", 1000000);
                    break;
                case 6:
                    fflush(stdin);
                    quickSort("Ordenado", 500000);
                    quickSort("Ordenado", 1000000);
                    quickSort("Invertido", 500000);
                    quickSort("Invertido", 1000000);
                    quickSort("Randomico", 500000);
                    quickSort("Randomico", 1000000);
                    break;
                case 7:
                    fflush(stdin);
                    heapSort("Ordenado", 500000);
                    heapSort("Ordenado", 1000000);
                    heapSort("Invertido", 500000);
                    heapSort("Invertido", 1000000);
                    heapSort("Randomico", 500000);
                    heapSort("Randomico", 1000000);
                    break;
                case 8:
                    fflush(stdin);
                    radixSort("Ordenado", 500000);
                    radixSort("Ordenado", 1000000);
                    radixSort("Invertido", 500000);
                    radixSort("Invertido", 1000000);
                    radixSort("Randomico", 500000);
                    radixSort("Randomico", 1000000);
                    break;
                    
                    default:
                    x = 1;
                break;
                }
            }
        }
                
