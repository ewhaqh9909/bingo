#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h> //난수를 위해 
int get_number_byMe(int bingo[N][N])
{
	int my_count,h,i,j;
	my_count=0;
	
	while(1)
	{
		printf("1~%d 사이의 숫자를 입력:",N1);
		scanf("%d",&h);
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(bingo[i][j]==h)
					my_count++;
			
			}
		}
	}
	printf("%d",my_count);
}

int get_number_byCom(int com_bingo[N][N])
{
	int com_count,i,j,random;
	com_count=0;
	int turn=1;//turn 횟수 입력  
	srand((int)time(NULL));
	random=rand()%N1+1;
	while(1)
	{
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(com_bingo[i][j]==random)
					printf("컴퓨터가 %d를 선택했습니다.",random);
					com_count++;
				turn++;
			}
		}
	}
	printf("%d",com_count);
}
