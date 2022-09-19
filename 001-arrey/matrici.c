/********************
*  Cristian Vecchi  *
*       3�H         *      
*     15/9/2022     *
*      Matrici      *          
********************/

//inclusione librerie

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "limits.h"

//definizione costanti 

#define C 10
#define R 10
#define N 10

//chiamo le funzioni

void CaricaVettoreRandom(int []);  //caricare il vettore casualmente
void CaricaVettoreManuale(int []);  //caricare il vettore manualmente
void StampaVettore(int []);  // stampa un vettore 
void CaricaMatriceRandom(int [][C]); //caricare la matrice casualmente
void CaricaMatriceManuale(int [][C]); //caricare la matrice manualmente

int main()
{
	int v[N],m[R][C];
	
	CaricaVettoreRandom(v);
	CaricaVettoreManuale(v);
	StampaVettore(v);
	
	return 0;
}
void CaricaVettoreRandom(int v[])
{
	int i,a;
	
	srand(time(NULL));
	
	for(i=0;i<=N;i++)
	{
		a=rand()% 8+1;
		v[i]=a;
	}
}
void CaricaVettoreManuale(int v[])
{
	int i,a;
	
	printf("inserire dieci numeri");
	
	for(i=0;i<=N;i++)
	{
		scanf("%d",&a);
		v[i]=a;
	}
}

void StampaVettore(int v[])
{
	int i;
	
	for(i=0;i<=N;i++)
	{
		printf("%d\t",v[i]);
	}
	printf("\n");
}
