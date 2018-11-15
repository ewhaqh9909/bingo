#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h> //난수를 위해 
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
	printf("게임 시작!\n\n");
	int turn=1;
	srand((int)time(NULL));
		initiate_bingo(bingo);
		initiate_bingo(com_bingo);
		printf("---사용자 빙고판---\n");
		while(1)
		{
		
			printf("%d번째 턴입니다.\n",turn);
			print_bingo(bingo);
			get_number_byMe(bingo);
			process_bingo(bingo);
			get_number_byCom(com_bingo);
			process_bingo(com_bingo);
			
		}
}









