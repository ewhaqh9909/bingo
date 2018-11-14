int initiate_bingo(int bingo[N][N])
{
	int i,j,ran1,ran2; 
	int random[ran1];
	int com_random[ran2];
	int com_bingo[N][N];

	srand((int)time(NULL));
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			bingo[i][j]=0;
		}
	}
	
	for(i=0;i<N1;i++)
	{
		random[i]=0;
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			while(1)//중복체크를 위한 무한 루프를 설치 
			{
				ran1=rand()%(N*N)+1;
				if(random[ran1]==0)
				{
					bingo[i][j]=ran1;
					random[ran1]=1;
					break;
				}
			
			}
		}
	} 

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%5d",bingo[i][j]);
		}
		printf("\n");
	}
	
//밑에는 컴퓨터의 빙고판 
	print("-----------컴퓨터 빙고----------\ㅜ")

		for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			com_bingo[i][j]=0;
		}
	}
	
	for(i=0;i<N1;i++)
	{
		random[i]=0;
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			while(1)//중복체크를 위한 무한 루프를 설치 
			{
				ran2=rand()%(N*N)+1;
				if(random[ran2]==1)
				{
					bingo[i][j]=ran2;
					random[ran2]=1;
					break;
				}
			
			}
		}
	} 
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%5d",bingo[i][j]);
		}
		printf("\n");
	}
	
		
	}
	
	
	
	


