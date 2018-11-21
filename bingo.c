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
	int bingo[N][N];//사용자의 빙고판을 위한 배열  
	int com_bingo[N][N];//컴퓨터의 빙고판... 
	int user_num;//사용자가 입력한 숫자... 
	int random;//컴퓨터가 난수로 뽑은 램덤 숫자... 
	int turn=0; //빙고게임을 한 turn(횟수)... 
	printf("게임 시작!\n\n");	
	
	
	srand((int)time(NULL));//램덤으로 숫자를 뽑기위한 난수... 
	
		initiate_bingo(bingo);//초기의 사용자 빙고판을 램덤으로 선정  
		initiate_bingo(com_bingo);//초기의 컴퓨터 빙고판을 램덤으로 선정  
		printf("---사용자 빙고판---\n");
	
	while(count_bingo(bingo)<M && count_bingo(com_bingo)<M)//빙고의 수가 지정한 수 M보다 작을때인 아직 빙고가 나오지 않았을떄 작동  
	{
			print_bingo(bingo);//현재 사용자 빙고판 출력  
			printf("숫자를 입력하시오.\n");
			user_num=get_number_byMe(bingo); //사용자가 수를 입력하고 입력한 수를 user_num라 저장... 
			process_bingo(bingo,user_num);//사용자 빙고판에서 user_num숫자를 -1로 치환한다 
			process_bingo(com_bingo,user_num);//컴퓨터 빙고판에서 user_num숫자를 -1로 치환한다 
			random=get_number_byCom(com_bingo);//컴퓨터가 난수로 뽑은 램덤한 수를 random이라 저장... 
			process_bingo(com_bingo,random);//사용자 빙고판에서 random숫자를 -1로 치환한다 
			process_bingo(bingo,random);//컴퓨터 빙고판에서 random숫자를 -1로 치환한다 
			turn++;//위의 과정을 한번 거치면 turn이 1이 올라가 빙고을 맞추기 위해 행해진 횟수를 측정할 수 있다 
	}
	printf("사용자 빙고 결과!!\n");
	print_bingo(bingo);//최종 사용자 빙고판을 출력한다  
	
	printf("컴퓨터 빙고 결과!!\n");
	print_bingo(com_bingo);//최종 컴퓨터 빙고판을 출력한다  
	 
		if(count_bingo(bingo)/*사용자 빙고수*/ >=M&&count_bingo(com_bingo)/*컴퓨터 빙고수*/>=M) //빙고수랑 M을 비교...                                                                 
		{
			printf("비겼습니다!");
		}
		if(count_bingo(bingo)>=M&&count_bingo(com_bingo)<=M)
		{
			printf("사용자 우승!");
		}
		if(count_bingo(bingo)<=M&&count_bingo(com_bingo)>=M)
		{
			printf("컴퓨터 우승!");
		 }
	/*위의 if구문들은 count_bingo함수로부터 사용자의 값과 컴퓨터의 값의 real_bingo값이 
    정해진 값인 M과 비교하여 승자를 가려내는 구문이다.*/ 
	printf("%d번 만에 승자가 나왔습니다.",turn); //빙고게임을 한 횟수를 turn으로 나타냄  
		
	
		
			
		
}









