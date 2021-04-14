#define _CRT_SECURE_NO_WARNINGS 1
#include"text.h"
#include<stdio.h>
//实现 定义函数
void InitBoard(char board[ROW][COW], int row, int cow)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < cow; j++)
		{
			board[i][j] = ' ';
		}

	}
}

																										//棋盘一
//void DisplayBoard(char board[ROW][COW], int row, int cow)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印一行数据
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//打印分割行
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}






//																										棋盘二
void DisplayBoard(char board[ROW][COW], int row, int cow)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行数据
		int j = 0;
		for (j = 0; j < cow; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < cow - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < cow; j++)
			{
				printf("---");
			if (j < cow - 1)
				printf("|");
			}
		}
		printf("\n");
	}
}

//玩家下棋
void Playermove(char board[ROW][COW], int row, int cow)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	printf("请输入要走的坐标:");
	while (1)
	{
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= cow)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("该坐标被占用,请重新输入：");
		}
		else
		{
			printf("输入坐标不合法，请重新输入：");
		}
	}

}

//电脑下棋
void Computermove(char board[ROW][COW], int row, int cow)
{
	printf("电脑走：>\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		x = rand() % cow;
	y = rand() % row;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}

}


//判断胜负
//玩家赢X
//电脑赢O
//平局Q
//c继续

char IsWin(char board[ROW][COW], int row, int cow)
{
	int i = 0;

	//横三
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][1];
		}
	}

	//竖三
	for(i=1;i<cow;i++)
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}

	//斜三
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

					//先判断输赢是否有返回值，再判断是否下满棋盘平局



	//平局
	if(IsFull == 1)
		return 'Q';
	else
		return 'C';

}


int IsFull(char board[ROW][COW], int row, int cow)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < cow; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}





