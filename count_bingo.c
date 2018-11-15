#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N

#include <time.h>
int count_bingo(int bingo[N][N])
{
	int i,j,sum,real_bingo=0;
	int com_bingo[N][N];
	int bingo1=0,bingo2=0,bingo3=0,bingo4=0;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			sum+=bingo[i][j];
			if(sum==-5)
			{
				bingo1++;
				
			}
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			sum+=bingo[j][i];
			if(sum==-5)
			{
				bingo2++;
			}
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		sum+=bingo[i][i];
		if(sum==-5)
		{
			bingo3++;
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		sum+=bingo[i][N-1-i];
		if(sum==0)
		{
			bingo4++;
		}
	}
	sum=0;
	
	real_bingo=bingo1+bingo2+bingo3+bingo4;
	return real_bingo;
}
