#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#define M 1
#include <time.h> //난수를 위해 
#include "bingo_N.h"
#include "print_bingo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]){
	int bingo[N][N];
	int com_bingo[N][N];
	printf("게임 시작!\n\n");
	
	srand((int)time(NULL));

	initiate_bingo(bingo);
	print_bingo(bingo);
	initiate_bingo(com_bingo);
	
	
}


	
	






