#define _CRT_SECURE_NO_WARNINGS 1
#include"text.h"
#include<stdio.h>
//ʵ�� ���庯��
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

																										//����һ
//void DisplayBoard(char board[ROW][COW], int row, int cow)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡһ������
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//��ӡ�ָ���
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}






//																										���̶�
void DisplayBoard(char board[ROW][COW], int row, int cow)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡһ������
		int j = 0;
		for (j = 0; j < cow; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < cow - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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

//�������
void Playermove(char board[ROW][COW], int row, int cow)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�>\n");
	printf("������Ҫ�ߵ�����:");
	while (1)
	{
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= cow)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("�����걻ռ��,���������룺");
		}
		else
		{
			printf("�������겻�Ϸ������������룺");
		}
	}

}

//��������
void Computermove(char board[ROW][COW], int row, int cow)
{
	printf("�����ߣ�>\n");
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


//�ж�ʤ��
//���ӮX
//����ӮO
//ƽ��Q
//c����

char IsWin(char board[ROW][COW], int row, int cow)
{
	int i = 0;

	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][1];
		}
	}

	//����
	for(i=1;i<cow;i++)
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}

	//б��
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

					//���ж���Ӯ�Ƿ��з���ֵ�����ж��Ƿ���������ƽ��



	//ƽ��
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





