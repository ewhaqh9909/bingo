#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h> //������ ���� 
#define M 1
#include "bingo_N.h"
#include "print_bingo.h"
#include "get_number.h"
#include "process_bingo.h"
#include "count_bingo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int bingo[N][N];//������� �������� ���� �迭  
	int com_bingo[N][N];//��ǻ���� ������... 
	int user_num;//����ڰ� �Է��� ����... 
	int random;//��ǻ�Ͱ� ������ ���� ���� ����... 
	int turn=0; //��������� �� turn(Ƚ��)... 
	printf("���� ����!\n\n");	
	
	
	srand((int)time(NULL));//�������� ���ڸ� �̱����� ����... 
	
		initiate_bingo(bingo);//�ʱ��� ����� �������� �������� ����  
		initiate_bingo(com_bingo);//�ʱ��� ��ǻ�� �������� �������� ����  
		printf("---����� ������---\n");
	
	while(count_bingo(bingo)<M && count_bingo(com_bingo)<M)//������ ���� ������ �� M���� �������� ���� ���� ������ �ʾ����� �۵�  
	{
			print_bingo(bingo);//���� ����� ������ ���  
			printf("���ڸ� �Է��Ͻÿ�.\n");
			user_num=get_number_byMe(bingo); //����ڰ� ���� �Է��ϰ� �Է��� ���� user_num�� ����... 
			process_bingo(bingo,user_num);//����� �����ǿ��� user_num���ڸ� -1�� ġȯ�Ѵ� 
			process_bingo(com_bingo,user_num);//��ǻ�� �����ǿ��� user_num���ڸ� -1�� ġȯ�Ѵ� 
			random=get_number_byCom(com_bingo);//��ǻ�Ͱ� ������ ���� ������ ���� random�̶� ����... 
			process_bingo(com_bingo,random);//����� �����ǿ��� random���ڸ� -1�� ġȯ�Ѵ� 
			process_bingo(bingo,random);//��ǻ�� �����ǿ��� random���ڸ� -1�� ġȯ�Ѵ� 
			turn++;//���� ������ �ѹ� ��ġ�� turn�� 1�� �ö� ������ ���߱� ���� ������ Ƚ���� ������ �� �ִ� 
	}
	printf("����� ���� ���!!\n");
	print_bingo(bingo);//���� ����� �������� ����Ѵ�  
	
	printf("��ǻ�� ���� ���!!\n");
	print_bingo(com_bingo);//���� ��ǻ�� �������� ����Ѵ�  
	 
		if(count_bingo(bingo)/*����� �����*/ >=M&&count_bingo(com_bingo)/*��ǻ�� �����*/>=M) //������� M�� ��...                                                                 
		{
			printf("�����ϴ�!");
		}
		if(count_bingo(bingo)>=M&&count_bingo(com_bingo)<=M)
		{
			printf("����� ���!");
		}
		if(count_bingo(bingo)<=M&&count_bingo(com_bingo)>=M)
		{
			printf("��ǻ�� ���!");
		 }
	/*���� if�������� count_bingo�Լ��κ��� ������� ���� ��ǻ���� ���� real_bingo���� 
    ������ ���� M�� ���Ͽ� ���ڸ� �������� �����̴�.*/ 
	printf("%d�� ���� ���ڰ� ���Խ��ϴ�.",turn); //��������� �� Ƚ���� turn���� ��Ÿ��  
		
	
		
			
		
}









