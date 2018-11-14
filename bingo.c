#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#include <time.h> //난수를 위해 
#define M 1
#include "bingo_N.h"
#include "print_bingo.h"
#include "get_number.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]){
	int bingo[N][N];
	int com_bingo[N][N];
	printf("게임 시작!\n\n");
	
	srand((int)time(NULL));
	
		printf("---사용자 빙고판---\n");
		initiate_bingo(bingo);
		print_bingo(bingo);
		get_number_byMe(bingo);
		
		initiate_bingo(com_bingo);
		get_number_byCom(com_bingo);
		
	
}


	
	






