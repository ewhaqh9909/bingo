#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N

#include <time.h> //난수를 위해 
int get_number_byMe(int bingo[N][N])	//사용자가 지정한 숫자를 입력받기 위한 함수 
{
	int my_count,user_num,i,j;//my_count는 빙고판에 user_num가 들어가면 수가 올라감  
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
					my_count++;//만약 my_count가 증가가 되지 않는다는건 1~N*N사이의 숫자가 아니라는것   
			}
		}
		if(my_count==0||user_num==-1)	//user_num은 이미 입력되어서 -1로 바뀐 숫자 그러므로 중복이므로 다시 입력 받음 결국 1~N*N사이에 있는 수 만을 입력받기 위해... 
		{
			printf("잘못입력했습니다. 다시 입력하십시오.\n");
		} else  
		 break;
	}
		 
	return user_num;
}

int get_number_byCom(int com_bingo[N][N])	//컴퓨터가 램덤으로 수를 입력받기 위한 함수 
{
	int i,j,random;
	srand((int)time(NULL));
	random=rand()%(N*N)+1; //random의 범위를 설정하기 위해  
	while(1)
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(com_bingo[i][j]==random)
				{
					printf("컴퓨터가 %d를 선택했습니다.\n", random);
					return random;
				}
			}
		}
		
	}
	
}
