/****************************************************
* Trab 2 : Numeros Primos
* Nome e Matricula: Natan Lopes Siqueira Campos - 0050014798
* Professor: Alex Salgado
*****************************************************/
#include<stdio.h>
int main ()
{
	int num=0;
	int i=0;
	int opcao;
	
 do
 {
   
 	printf("\nOla, meu nome eh Natan Lopes e vou calcular numeros primos\n");
	printf("\nEntre com um numero positivo\n");
	scanf("%d",&num);
   
  }
  while(num<=0);

for(i=(num-1); i>1; i++);
{

  if( (num % i) == 0 ){
		printf("\n Esse numero eh primo");
		return 0;
	}
	  printf("\nEste numero nao eh primo");
}
system("pause");
return 0;
	}
