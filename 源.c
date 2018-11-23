#include <stdio.h>

#include "game.h"



void menu()

{

	printf("*************************\n");

	printf("**** 1.play    0.exit ***\n");

	printf("*************************\n");

}


void game()

{

	char board[ROW][COL] = { 0 };

	char ret = 0;

	InitBoard(board, ROW, COL);

	DisplayBoard(board, ROW, COL);

	while (1)

	{

		PlayerMove(board, ROW, COL);

		ret = IsWin(board, ROW, COL);

		if (ret != ' ')

			break;

		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);

		ret = IsWin(board, ROW, COL);

		if (ret != ' ')

			break;

		DisplayBoard(board, ROW, COL);

	}

	if (ret == 'X')

		printf("���Ӯ\n");

	else if (ret == '*')

		printf("����Ӯ\n");

	else if (ret == 'Q')

		printf("ƽ��\n");

	DisplayBoard(board, ROW, COL);

}

void test()

{

	int input = 0;

	srand((unsigned int)time(NULL));

	do

	{

		menu();

		printf("��ѡ��:>");

		scanf("%d", &input);

		switch (input)

		{

		case 1:

			game();

			break;

		case 0:

			printf("�˳���Ϸ\n");

			break;

		default:

			printf("ѡ�����!\n");

			break;

		}

	} while (input);

}


int main()

{

	test();

	return 0;

}


