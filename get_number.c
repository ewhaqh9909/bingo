#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N

#include <time.h> //������ ���� 
int get_number_byMe(int bingo[N][N])	//����ڰ� ������ ���ڸ� �Է¹ޱ� ���� �Լ� 
{
	int my_count,user_num,i,j;//my_count�� �����ǿ� user_num�� ���� ���� �ö�  
	my_count=0;

	while(1)
	{
		printf("1~%d ������ ���ڸ� �Է�:",N1);
		scanf("%d",&user_num);
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(bingo[i][j]==user_num)
					my_count++;//���� my_count�� ������ ���� �ʴ´ٴ°� 1~N*N������ ���ڰ� �ƴ϶�°�   
			}
		}
		if(my_count==0||user_num==-1)	//user_num�� �̹� �ԷµǾ -1�� �ٲ� ���� �׷��Ƿ� �ߺ��̹Ƿ� �ٽ� �Է� ���� �ᱹ 1~N*N���̿� �ִ� �� ���� �Է¹ޱ� ����... 
		{
			printf("�߸��Է��߽��ϴ�. �ٽ� �Է��Ͻʽÿ�.\n");
		} else  
		 break;
	}
		 
	return user_num;
}

int get_number_byCom(int com_bingo[N][N])	//��ǻ�Ͱ� �������� ���� �Է¹ޱ� ���� �Լ� 
{
	int i,j,random;
	srand((int)time(NULL));
	random=rand()%(N*N)+1; //random�� ������ �����ϱ� ����  
	while(1)
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(com_bingo[i][j]==random)
				{
					printf("��ǻ�Ͱ� %d�� �����߽��ϴ�.\n", random);
					return random;
				}
			}
		}
		
	}
	
}
