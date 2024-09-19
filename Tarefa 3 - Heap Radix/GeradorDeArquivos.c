#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  FILE *ordenado, *invertido, *randomico;
  int tam, x;
  char nomeArquivo[255];
  printf("Informe o tamanho do arquivo ");
  scanf("%d", &tam);
  sprintf(nomeArquivo, "Ordenado-%07d.txt", tam);
  ordenado = fopen(nomeArquivo, "w");
  for (x=1;x<=tam;x++){
  	if(x!=tam)
    	fprintf(ordenado, "%d\n", x);
    else
    	fprintf(ordenado, "%d", x);
  }
  fclose(ordenado);

  sprintf(nomeArquivo, "Invertido-%07d.txt", tam);
  invertido = fopen(nomeArquivo, "w");
  for (x=tam;x>=1;x--){
    if(x!=1)
		fprintf(invertido, "%d\n", x);
	else
		fprintf(invertido, "%d", x);
  }
  fclose(invertido);

  sprintf(nomeArquivo, "Randomico-%07d.txt", tam);
  randomico = fopen(nomeArquivo, "w");
  for (x=1;x<=tam;x++){
    if(x!=tam)
		fprintf(randomico, "%d\n", (rand() % tam)+1);
    else
    	fprintf(randomico, "%d", (rand() % tam)+1);
  }
  fclose(randomico);
    return tam;
}
