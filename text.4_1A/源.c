#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"text.h"

void menu()
{
	printf("**********游戏 三子棋***********\n");
	printf("*******************************\n");
	printf("********1.play    0.exit*******\n");
	printf("*******************************\n");
}
//游戏的实现  想法
//void game()
//{
//	//char ret = 0;
//	//创建数组存放棋盘信息
//	char board[ROW][COW] = {0};//全部为空格
//	//初始化棋盘
//	InitBoard(board, ROW, COW);
//	//打印棋盘
//	DisplayBoard(board, ROW, COW);
//	//下棋
//	while (1)
//	{
//		//玩家下棋
//		Playermove(board, ROW, COW);
//		DisplayBoard(board, ROW, COW);
//		//判断玩家是否获得胜利
//		if (IsWin(board, ROW, COW) == 'X')
//		{
//			printf("游戏结束，玩家胜利");
//				break;
//		}
//
//
//
//		//电脑下棋
//		Computermove(board, ROW, COW);
//		DisplayBoard(board, ROW, COW);
//		//判断电脑是否获得胜利
//		if (IsWin(board, ROW, COW) == 'O')
//		{
//			printf("游戏结束，电脑胜利");
//				break;
//		}
//
//		if (IsWin(board, ROW, COW) == 'Q')
//		{
//			printf("游戏结束，平局");
//			break;
//		}
//	}
//
//}


//游戏的实现 标准
void game()
{
	char ret = 0;
	//创建数组存放棋盘信息
	char board[ROW][COW] = { 0 };//全部为空格
	//初始化棋盘
	InitBoard(board, ROW, COW);
	//打印棋盘
	DisplayBoard(board, ROW, COW);
	//下棋
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COW);
		DisplayBoard(board, ROW, COW);
		//判断玩家是否获得胜利
		ret = IsWin(board, ROW, COW);
		if (ret != 'C')
			break;
		//电脑下棋
		Computermove(board, ROW, COW);
		DisplayBoard(board, ROW, COW);
		//判断电脑是否获得胜
		ret = IsWin(board, ROW, COW);
		if (ret != 'C')
			break;
	}

	if(ret=='X')
		printf("游戏结束，玩家胜利\n");
	else if(ret=='O')
		printf("游戏结束，电脑胜利\n");
	else
		printf("游戏平局\n");

}





//测试
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf(" %d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);
	
}

int main()
{
	test();
	return 0;
 }