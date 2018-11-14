#include <stdio.h>
#include <stdlib.h>
#define N 5
#define N1 N*N
#define M 1
#include <time.h> //난수를 위해 
#include "bingo_N.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int bingo[N][N]);
int main(int argc, char *argv[]){
	int bingo[N][N];
	printf("게임 시작!\n\n");
	initiate_bingo(bingo);
}


	
	






