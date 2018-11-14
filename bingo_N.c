#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#define M 1
#include <time.h> //난수를 위해 
int initiate_bingo(int bingo[N][N])
{
	int i,j,ran; 
	int random[ran];
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			bingo[i][j]=0;
		}
	}
	
	for(i=0;i<N1;i++)
	{
		random[i]=0;
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			while(1)//중복체크를 위한 무한 루프를 설치 
			{
				ran=rand()%(N*N)+1;
				if(random[ran]==0)
				{
					bingo[i][j]=ran;
					random[ran]=1;
					break;
				}
			
			}
		}
	} 

}
	
	int print_bingo(int bingo[N][N])
{	int i,j;
		for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%3d",bingo[i][j]);
		}
		printf("\n");
	}

}
	
