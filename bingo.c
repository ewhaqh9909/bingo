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
	int turn=1; 
	printf("���� ����!\n\n");
	
	srand((int)time(NULL));
		initiate_bingo(bingo);
		initiate_bingo(com_bingo);
		printf("---����� ������---\n");
	while(count_bingo(bingo)<=M&&count_bingo(com_bingo)<=M)
	{
			print_bingo(bingo);
			printf("���ڸ� �Է��Ͻÿ�.\n");
			get_number_byMe(bingo);
			process_bingo(bingo); 
			printf("����ڰ� �Է��� ��:%d\n",user_num);
		
			get_number_byCom(com_bingo);
			process_bingo(com_bingo);
			printf("��ǻ�Ͱ� �Է��� ��:%d",random);
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
			
			
			
		
}









