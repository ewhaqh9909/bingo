#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N

#include <time.h>
int count_bingo(int bingo[N][N])
{
	int i,j,sum,real_bingo=0;//sum�� ���� ���� �밢�� �������� -1�� �ڸ����� ���� ���ϱ�����   
	int com_bingo[N][N];
	int bingo1=0,bingo2=0,bingo3=0,bingo4=0;//���� ���� �밢���� ������ ���� ��  
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			sum+=bingo[i][j];//���κ������ ����  
			if(sum==-5)//���ؼ� -5�� ���Դٴ°� 1���� ���� �Ǿ��ٴ� ���̴�. 
			{
				bingo1++;//�׷��Ƿ� ������ ������� 1�� �����ش�  
				
			}
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			sum+=bingo[j][i];//���κ������ ����  
			if(sum==-5)
			{
				bingo2++;
			}
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		sum+=bingo[i][i];//���� ������ ������ �Ʒ��� ���� ������� ����   
		if(sum==-5)
		{
			bingo3++;
		}
	}
	sum=0;
	for(i=0;i<N;i++)
	{
		sum+=bingo[i][N-1-i];//������������ ���� �Ʒ��� ���� ������� ����  
		if(sum==0)
		{
			bingo4++;
		}
	}
	sum=0;
	
	real_bingo=bingo1+bingo2+bingo3+bingo4;//������ ������� ���ؼ� ��¥ ������� real_bingo�� ����ؼ� ���߿� M�̶� ���ϰ� �ȴ�  
	return real_bingo;
}
