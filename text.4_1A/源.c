#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"text.h"

void menu()
{
	printf("**********��Ϸ ������***********\n");
	printf("*******************************\n");
	printf("********1.play    0.exit*******\n");
	printf("*******************************\n");
}
//��Ϸ��ʵ��  �뷨
//void game()
//{
//	//char ret = 0;
//	//����������������Ϣ
//	char board[ROW][COW] = {0};//ȫ��Ϊ�ո�
//	//��ʼ������
//	InitBoard(board, ROW, COW);
//	//��ӡ����
//	DisplayBoard(board, ROW, COW);
//	//����
//	while (1)
//	{
//		//�������
//		Playermove(board, ROW, COW);
//		DisplayBoard(board, ROW, COW);
//		//�ж�����Ƿ���ʤ��
//		if (IsWin(board, ROW, COW) == 'X')
//		{
//			printf("��Ϸ���������ʤ��");
//				break;
//		}
//
//
//
//		//��������
//		Computermove(board, ROW, COW);
//		DisplayBoard(board, ROW, COW);
//		//�жϵ����Ƿ���ʤ��
//		if (IsWin(board, ROW, COW) == 'O')
//		{
//			printf("��Ϸ����������ʤ��");
//				break;
//		}
//
//		if (IsWin(board, ROW, COW) == 'Q')
//		{
//			printf("��Ϸ������ƽ��");
//			break;
//		}
//	}
//
//}


//��Ϸ��ʵ�� ��׼
void game()
{
	char ret = 0;
	//����������������Ϣ
	char board[ROW][COW] = { 0 };//ȫ��Ϊ�ո�
	//��ʼ������
	InitBoard(board, ROW, COW);
	//��ӡ����
	DisplayBoard(board, ROW, COW);
	//����
	while (1)
	{
		//�������
		Playermove(board, ROW, COW);
		DisplayBoard(board, ROW, COW);
		//�ж�����Ƿ���ʤ��
		ret = IsWin(board, ROW, COW);
		if (ret != 'C')
			break;
		//��������
		Computermove(board, ROW, COW);
		DisplayBoard(board, ROW, COW);
		//�жϵ����Ƿ���ʤ
		ret = IsWin(board, ROW, COW);
		if (ret != 'C')
			break;
	}

	if(ret=='X')
		printf("��Ϸ���������ʤ��\n");
	else if(ret=='O')
		printf("��Ϸ����������ʤ��\n");
	else
		printf("��Ϸƽ��\n");

}





//����
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf(" %d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	
}

int main()
{
	test();
	return 0;
 }