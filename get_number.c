#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h> //������ ���� 
int get_number_byMe(int bingo[N][N])
{
	int my_count,h,i,j;
	my_count=0;
	
	while(1)
	{
		printf("1~%d ������ ���ڸ� �Է�:",N1);
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
	int turn=1;//turn Ƚ�� �Է�  
	srand((int)time(NULL));
	random=rand()%N1+1;
	while(1)
	{
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(com_bingo[i][j]==random)
					printf("��ǻ�Ͱ� %d�� �����߽��ϴ�.",random);
					com_count++;
				turn++;
			}
		}
	}
	printf("%d",com_count);
}
