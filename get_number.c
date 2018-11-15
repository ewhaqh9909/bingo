#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#define M 1
#include <time.h> //난수를 위해 
int get_number_byMe(int bingo[N][N])	//사용자가 지정한 숫자를 입력받기 위한 함수 
{
	int my_count,user_num,i,j;
	my_count=0;

	while(1)
	{
		printf("1~%d 사이의 숫자를 입력:",N1);
		scanf("%d",&user_num);
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(bingo[i][j]==user_num)
					my_count++;
			
			}
		}
		if(my_count==0||user_num==-1)
		{
			printf("잘못입력했습니다. 다시 입력하십시오.");
		 } else
		 break;
	}
	return user_num;
}

int get_number_byCom(int com_bingo[N][N])	//컴퓨터가 램덤으로 수를 입력받기 위한 함수 
{
	int i,j,random;
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
					return random;
			
			}
		}
		
	}
	
}
