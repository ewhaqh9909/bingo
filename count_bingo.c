#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#define M 1
#include <time.h>
int count_bingo(int bingo[N][N])
{
	int i=0,j=0,width=0,length=0,cross1=0,cross2=0;
	int com_bingo[N][N]; 
	
	int real_bingo=0;
	for(j=0;j<N;j++)
	{
			if(bingo[1][j]==-1)
			{
				width++;
			}
			if(bingo[2][j]==-1)
			{
				width++;
			}
			if(bingo[3][j]==-1)
			{
				width++;
			}
			if(bingo[4][j]==-1)
			{
				width++;
			}
			if(bingo[5][j]==-1)
			{
				width++;
			}
	}
	
	for(i=0;i<N;i++)
	{
		if(bingo[i][1]==-1)
		{
			length++;
		}else
		if(bingo[i][2]==-1)
		{
			length++;
		}else
		if(bingo[i][3]==-1)
		{
			length++;
		}else
		if(bingo[i][4]==-1)
		{
			length++;
		}else
		if(bingo[i][5]==-1)
		{
			length++;
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

	return real_bingo;
}
