#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h> 

int process_bingo(int bingo[N][N],int user_num)//사용자로 부터 입력받은 값을 -1로 바꾸고 컴퓨터가 램덤으로 뽑은 값을 -1로 바꾸는 함수   
{
	int i,j;
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

