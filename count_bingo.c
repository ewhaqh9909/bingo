#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N

#include <time.h>
int count_bingo(int bingo[N][N])
{
	int i,j,sum,real_bingo=0;//sum은 가로 세로 대각선 각각에서 -1인 자리들의 값을 더하기위해   
	int com_bingo[N][N];
	int bingo1=0,bingo2=0,bingo3=0,bingo4=0;//가로 세로 대각선의 각각의 빙고 수  
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			sum+=bingo[i][j];//가로빙고수를 측정  
			if(sum==-5)//더해서 -5가 나왔다는건 1줄이 빙고가 되었다는 것이다. 
			{
				bingo1++;//그러므로 각각의 빙고수를 1개 더해준다  
				
			}
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			sum+=bingo[j][i];//세로빙고수를 측정  
			if(sum==-5)
			{
				bingo2++;
			}
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		sum+=bingo[i][i];//왼쪽 위에서 오른쪽 아래로 가는 빙고수를 측정   
		if(sum==-5)
		{
			bingo3++;
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		sum+=bingo[i][N-1-i];//오른쪽위에서 왼쪽 아래로 가는 빙고수를 측정  
		if(sum==0)
		{
			bingo4++;
		}
	}
	sum=0;
	
	real_bingo=bingo1+bingo2+bingo3+bingo4;//각각의 빙고수를 더해서 진짜 빙고수인 real_bingo를 계산해서 나중에 M이랑 비교하게 된다  
	return real_bingo;
}
