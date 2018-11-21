#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N

#include <time.h> //난수를 위해 
int initiate_bingo(int bingo[N][N]) 	//초기의 빙고판 생성을 위한 함수 
{
	int i,j,ran1,ran2; 
	int random[ran1]; //사용자의 radom배열... 
	int com_random[ran2];//컴퓨터의 random배열... 
	int com_bingo[N][N];
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			bingo[i][j]=0;
		}
	} //빙고판을 0으로 초기화  
	
	for(i=0;i<N1;i++)
	{
		random[i]=0;
	}//램덤배열을  우선 다 0으로 초기화  
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			while(1)//0인 자리에 램덤수를 놓을수 있도록 돌리는 루프  
			{
				ran1=rand()%(N*N)+1;//random[]의 숫자를 1~N*N으로 범위 설정  
				if(random[ran1-1]==0)//0으로 되어있는 곳에... (배열은 0~시작하므로 -1을 해준다) 
				{
					bingo[i][j]=ran1;//위의 0인 자리에 1~N*N중 하나를 넣는다  
					random[ran1-1]=1;//난수 배열이 다 차면 while을 break한다 
					break;
				}
			
			}
		}
	} 
	
}
	
	
