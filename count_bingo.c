#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h>
int count_bingo(int bingo[N][N])
{
	int i,j,width,length,cross1,cross2;
	width=0;
	length=0;
	cross1=0;
	cross2=0;
	int real_bingo=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(bingo[i][j]=-1)
			{
				width++;
			}
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(bingo[j][i]=-1)
			{
				length++;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		if(bingo[i][i]==-1)
		cross1++;
	}
	
	for(i=0;i<N;i++)
	{
		if(bingo[i][N-1-i]==-1)
		cross2++;
	}
	real_bingo=width+length+cross1+cross2;
}
