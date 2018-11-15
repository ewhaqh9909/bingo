#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 1

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
printf("\n");
}
