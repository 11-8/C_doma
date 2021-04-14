#include<stdio.h>
#define ROW 3
#define COW 3
#include<stdlib.h>
#include<time.h>

//ÉùÃ÷
void InitBoard(char board[ROW][COW], int row, int cow);
void DisplayBoard(char board[ROW][COW], int row, int cow);
void Playermove(char board[ROW][COW], int row, int cow);
void Computermove(char board[ROW][COW], int row, int cow);

char IsWin(char board[ROW][COW], int row, int cow);
int IsFull(char board[ROW][COW], int row, int cow);