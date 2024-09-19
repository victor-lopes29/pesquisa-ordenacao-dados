#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("color F9");
    char nome[80];
    int p;
    int a = 0;
    int x = 0;
    int TAM;
    while (a == 0){
        printf("Digite 1 para Criar arquivo e 2 para a ordenacao e qualquer outra opcao para sair do programa\n");
        scanf("%d", &p);
        switch(p){
        case 1:
            TAM = GeradorArquivo();
            break;
        case 2:
            while(x == 0){
                printf("Digite o metodo de ordenacao - 2: \n[1]\t Bubble Sort\n[2]\t Insertion Sort\n[3]\t Shell Sort\n[4]\t Selection Sort\n[5]\t Merge Sort\n[6]\t Quick Sort\n[7]\t Heap Sort\n[8]\t Radix Sort\n");
                int z;
                scanf("%d",&z);
                switch(z)
                {

                case 1:
                    fflush(stdin);
                    bubbleSort("Ordenado", TAM);
                    bubbleSort("Invertido", TAM);
                    bubbleSort("Randomico", TAM);
                    break;
                case 2:
                    fflush(stdin);
                    insertionSort("Ordenado", 500000);
                    insertionSort("Ordenado", 750000);
                    insertionSort("Ordenado", 1000000);
                    insertionSort("Invertido", 500000);
                    insertionSort("Invertido", 750000);
                    insertionSort("Invertido", 1000000);
                    insertionSort("Randomico", 500000);
                    insertionSort("Randomico", 750000);
                    insertionSort("Randomico", 1000000);
                    break;
                case 3:
                    fflush(stdin);
                    shellSort("Ordenado", 500000);
                    shellSort("Ordenado", 750000);
                    shellSort("Ordenado", 1000000);
                    shellSort("Invertido", 500000);
                    shellSort("Invertido", 750000);
                    shellSort("Invertido", 1000000);
                    shellSort("Randomico", 500000);
                    shellSort("Randomico", 750000);
                    shellSort("Randomico", 1000000);
                    break;
                case 4:
                    fflush(stdin);
                    selectionSort("Ordenado", 500000);
                    selectionSort("Ordenado", 750000);
                    selectionSort("Ordenado", 1000000);
                    selectionSort("Invertido", 500000);
                    selectionSort("Invertido", 750000);
                    selectionSort("Invertido", 1000000);
                    selectionSort("Randomico", 500000);
                    selectionSort("Randomico", 750000);
                    selectionSort("Randomico", 1000000);
                    break;
                case 5:
                    fflush(stdin);
                    mergeSort("Ordenado", 500000);
                    mergeSort("Ordenado", 750000);
                    mergeSort("Ordenado", 1000000);
                    mergeSort("Invertido", 500000);
                    mergeSort("Invertido", 750000);
                    mergeSort("Invertido", 1000000);
                    mergeSort("Randomico", 500000);
                    mergeSort("Randomico", 750000);
                    mergeSort("Randomico", 1000000);
                    break;
                case 6:
                    fflush(stdin);
                    quickSort("Ordenado", 500000);
                    quickSort("Ordenado", 750000);
                    quickSort("Ordenado", 1000000);
                    quickSort("Invertido", 500000);
                    quickSort("Invertido", 750000);
                    quickSort("Invertido", 1000000);
                    quickSort("Randomico", 500000);
                    quickSort("Randomico", 750000);
                    quickSort("Randomico", 1000000);
                    break;
                case 7:
                    fflush(stdin);
                    heapSort("Ordenado", 500000);
                    heapSort("Ordenado", 750000);
                    heapSort("Ordenado", 1000000);
                    heapSort("Invertido", 500000);
                    heapSort("Invertido", 750000);
                    heapSort("Invertido", 1000000);
                    heapSort("Randomico", 500000);
                    heapSort("Randomico", 750000);
                    heapSort("Randomico", 1000000);
                    break;
                case 8:
                    fflush(stdin);
                    radixSort("Ordenado", 500000);
                    radixSort("Ordenado", 750000);
                    radixSort("Ordenado", 1000000);
                    radixSort("Invertido", 500000);
                    radixSort("Invertido", 750000);
                    radixSort("Invertido", 1000000);
                    radixSort("Randomico", 500000);
                    radixSort("Randomico", 750000);
                    radixSort("Randomico", 1000000);
                    break;
                case 999:
                    bubbleSort("Ordenado", 500000);
                    bubbleSort("Ordenado", 750000);
                    bubbleSort("Ordenado", 1000000);
                    bubbleSort("Invertido", 500000);
                    bubbleSort("Invertido", 750000);
                    bubbleSort("Invertido", 1000000);
                    bubbleSort("Randomico", 500000);
                    bubbleSort("Randomico", 750000);
                    bubbleSort("Randomico", 1000000);
                    insertionSort("Ordenado", 500000);
                    insertionSort("Ordenado", 750000);
                    insertionSort("Ordenado", 1000000);
                    insertionSort("Invertido", 500000);
                    insertionSort("Invertido", 750000);
                    insertionSort("Invertido", 1000000);
                    insertionSort("Randomico", 500000);
                    insertionSort("Randomico", 750000);
                    insertionSort("Randomico", 1000000);
                    shellSort("Ordenado", 500000);
                    shellSort("Ordenado", 750000);
                    shellSort("Ordenado", 1000000);
                    shellSort("Invertido", 500000);
                    shellSort("Invertido", 750000);
                    shellSort("Invertido", 1000000);
                    shellSort("Randomico", 500000);
                    shellSort("Randomico", 750000);
                    shellSort("Randomico", 1000000);
                    selectionSort("Ordenado", 500000);
                    selectionSort("Ordenado", 750000);
                    selectionSort("Ordenado", 1000000);
                    selectionSort("Invertido", 500000);
                    selectionSort("Invertido", 750000);
                    selectionSort("Invertido", 1000000);
                    selectionSort("Randomico", 500000);
                    selectionSort("Randomico", 750000);
                    selectionSort("Randomico", 1000000);
                    mergeSort("Ordenado", 500000);
                    mergeSort("Ordenado", 750000);
                    mergeSort("Ordenado", 1000000);
                    mergeSort("Invertido", 500000);
                    mergeSort("Invertido", 750000);
                    mergeSort("Invertido", 1000000);
                    mergeSort("Randomico", 500000);
                    mergeSort("Randomico", 750000);
                    mergeSort("Randomico", 1000000);
                    quickSort("Ordenado", 500000);
                    quickSort("Ordenado", 750000);
                    quickSort("Ordenado", 1000000);
                    quickSort("Invertido", 500000);
                    quickSort("Invertido", 750000);
                    quickSort("Invertido", 1000000);
                    quickSort("Randomico", 500000);
                    quickSort("Randomico", 750000);
                    quickSort("Randomico", 1000000);
                    heapSort("Ordenado", 500000);
                    heapSort("Ordenado", 750000);
                    heapSort("Ordenado", 1000000);
                    heapSort("Invertido", 500000);
                    heapSort("Invertido", 750000);
                    heapSort("Invertido", 1000000);
                    heapSort("Randomico", 500000);
                    heapSort("Randomico", 750000);
                    heapSort("Randomico", 1000000);
                    radixSort("Ordenado", 500000);
                    radixSort("Ordenado", 750000);
                    radixSort("Ordenado", 1000000);
                    radixSort("Invertido", 500000);
                    radixSort("Invertido", 750000);
                    radixSort("Invertido", 1000000);
                    radixSort("Randomico", 500000);
                    radixSort("Randomico", 750000);
                    radixSort("Randomico", 1000000);
                default:
                    x = 1;
                break;
                }

            }
                default:
                    a = 1;
                break;
        }
    }
}
