#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h> 
int process_bingo(int bingo[N][N])
{
	int i,j,user_num;
	int com_bingo[N][N];
	int random;
	srand((int)time(NULL));
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(bingo[i][j]==user_num)
			{
				bingo[i][j]=-1;
			}
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(com_bingo[i][j]==random)
			{
				com_bingo[i][j]=-1;
			}
		}
	}
	
}

