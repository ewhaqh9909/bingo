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
	int user_num;
	int random;
	int turn=0; 
	printf("게임 시작!\n\n");	
	
	
	srand((int)time(NULL));
	
		initiate_bingo(bingo);
		initiate_bingo(com_bingo);
		printf("---사용자 빙고판---\n");
	
	while(count_bingo(bingo)<M && count_bingo(com_bingo)<M)
	{
			
			print_bingo(bingo);
		
			printf("숫자를 입력하시오.\n");
			user_num=get_number_byMe(bingo); 
			process_bingo(bingo,user_num);
			process_bingo(com_bingo,user_num);
			printf("컴퓨터차례\n");
			random=get_number_byCom(com_bingo);
			process_bingo(com_bingo,random);
			process_bingo(bingo,random);
			print_bingo(bingo);
			turn++;
		
	
						
		
	}
		if(count_bingo(bingo)>=M&&count_bingo(com_bingo)>=M)                                                                   
		{
			printf("비겼습니다.");
		}
		if(count_bingo(bingo)>=M&&count_bingo(com_bingo)<=M)
		{
			printf("사용자 우승.");
		}
		if(count_bingo(bingo)<=M&&count_bingo(com_bingo)>=M)
		{
			printf("컴퓨터 우승.");
		 }
	/*위의 if구문들은 count_bingo함수로부터 사용자의 값과 컴퓨터의 값의 real_bingo값이 
	 	정해진 값인 M과 비교하여 승자를 가려내는 구문이다.*/ 
		printf("%d번 만에 승자가 나왔습니다.",turn); //빙고게임을 한 횟수를 turn으로 나타냄  
		
	
		
			
		
}









