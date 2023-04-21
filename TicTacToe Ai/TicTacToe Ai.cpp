#include <iostream>
#include <list>
#include<string>

using namespace std;
const int ROWsNum = 3;
const int ColumnsNum = 3;
int row;
int col;
int winner = 0;
bool gameover = false;
char board[ColumnsNum][ROWsNum] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

void printboard()
{
	cout << board[0][2] << " | " << board[1][2] << " | " << board[2][2] << endl;
	cout << "__________" << endl;
	cout << board[0][1] << " | " << board[1][1] << " | " << board[2][1] << endl;
	cout << "__________" << endl;
	cout << board[0][0] << " | " << board[1][0] << " | " << board[2][0] << endl;
}

void movex()
{
	cout << "Column: ";
	cin >> col;
	cout << "Row: ";
	cin >> row;
	board[col][row] = 'X';
}

void moveo()
{
	cout << "Column: ";
	cin >> col;
	cout << "Row: ";
	cin >> row;
	board[col][row] = 'O';
}

void checkwinner()
{
	if (gameover == false)
	{
		winner = -1;
	}
	else if (board[0][2] == board[1][2] == board[2][2])
	{
		if (board[0][2] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (board[0][1] == board[1][1] == board[2][1])
	{
		if (board[0][1] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (board[0][0] == board[1][0] == board[2][0])
	{
		if (board[0][0] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (board[0][0] == board[0][1] == board[0][2])
	{
		if (board[0][0] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (board[1][0] == board[1][1] == board[1][2])
	{
		if (board[1][0] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (board[2][0] == board[2][1] == board[2][2])
	{
		if (board[2][0] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (board[0][2] == board[1][1] == board[2][0])
	{
		if (board[0][2] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (board[0][0] == board[1][1] == board[2][2])
	{
		if (board[0][0] == 'X')
		{
			winner = 1;
		}
		else
		{
			winner = 2;
		}
	}
	else if (gameover == true)
	{
		winner = 5;
	}
	system("PAUSE");
}

void AI(int player)
{
    /*
	1 = X
	2 = O
	*/
	if (player == 1)
	{

	}
}