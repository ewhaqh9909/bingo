#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N

#include <time.h> //������ ���� 
int initiate_bingo(int bingo[N][N]) 	//�ʱ��� ������ ������ ���� �Լ� 
{
	int i,j,ran1,ran2; 
	int random[ran1]; //������� radom�迭... 
	int com_random[ran2];//��ǻ���� random�迭... 
	int com_bingo[N][N];
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			bingo[i][j]=0;
		}
	} //�������� 0���� �ʱ�ȭ  
	
	for(i=0;i<N1;i++)
	{
		random[i]=0;
	}//�����迭��  �켱 �� 0���� �ʱ�ȭ  
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			while(1)//0�� �ڸ��� �������� ������ �ֵ��� ������ ����  
			{
				ran1=rand()%(N*N)+1;//random[]�� ���ڸ� 1~N*N���� ���� ����  
				if(random[ran1-1]==0)//0���� �Ǿ��ִ� ����... (�迭�� 0~�����ϹǷ� -1�� ���ش�) 
				{
					bingo[i][j]=ran1;//���� 0�� �ڸ��� 1~N*N�� �ϳ��� �ִ´�  
					random[ran1-1]=1;//���� �迭�� �� ���� while�� break�Ѵ� 
					break;
				}
			
			}
		}
	} 
	
}
	
	
