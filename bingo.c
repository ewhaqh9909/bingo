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
	int bingo[N][N];
	int com_bingo[N][N];
	int user_num;
	int random;
	int turn=0; 
	printf("���� ����!\n\n");	
	
	
	srand((int)time(NULL));
	
		initiate_bingo(bingo);
		initiate_bingo(com_bingo);
		printf("---����� ������---\n");
	
	while(count_bingo(bingo)<M && count_bingo(com_bingo)<M)
	{
			
			print_bingo(bingo);
		
			printf("���ڸ� �Է��Ͻÿ�.\n");
			user_num=get_number_byMe(bingo); 
			process_bingo(bingo,user_num);
			process_bingo(com_bingo,user_num);
			printf("��ǻ������\n");
			random=get_number_byCom(com_bingo);
			process_bingo(com_bingo,random);
			process_bingo(bingo,random);
			print_bingo(bingo);
			turn++;
		
	
						
		
	}
		if(count_bingo(bingo)>=M&&count_bingo(com_bingo)>=M)                                                                   
		{
			printf("�����ϴ�.");
		}
		if(count_bingo(bingo)>=M&&count_bingo(com_bingo)<=M)
		{
			printf("����� ���.");
		}
		if(count_bingo(bingo)<=M&&count_bingo(com_bingo)>=M)
		{
			printf("��ǻ�� ���.");
		 }
	/*���� if�������� count_bingo�Լ��κ��� ������� ���� ��ǻ���� ���� real_bingo���� 
	 	������ ���� M�� ���Ͽ� ���ڸ� �������� �����̴�.*/ 
		printf("%d�� ���� ���ڰ� ���Խ��ϴ�.",turn); //��������� �� Ƚ���� turn���� ��Ÿ��  
		
	
		
			
		
}









