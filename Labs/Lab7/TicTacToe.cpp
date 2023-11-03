#include <iostream>
#define SIZE 3

using namespace std;


void PrintArr(char A[][SIZE]);
char checkBoard(char b[][SIZE]);
void clearBoard(char board[][SIZE]);


int main() {
	char board[SIZE][SIZE];
	clearBoard(board);

	char player[2] = { 'X', 'O' };

	bool isRunning = true;

	int turn = 0;

	while (isRunning) {
		cout << "It is " << player[turn % 2] << "'s Turn. Enter row and column numbers (1 1 through 3 3)\n";
		PrintArr(board);

		int i, j;
		cin >> i >> j;
		i--, j--;

		if (i > SIZE - 1 || j > SIZE - 1) {
			cout << "Invalid Input\n";
			continue;
		}

		if (board[i][j] != '_') {
			cout << "The position is already takes, try arain\n";
		}
		else {
			board[i][j] = player[turn % 2];
			turn++;
			char c = checkBoard(board);

			if (c != 'N') {
				cout << c << " Won\n";
				PrintArr(board);
				cout << "Wanna play again: y/n\n";
				cin >> c;
				if (c == 'n') {
					isRunning = false;
				}
				else if (c == 'y') {
					turn = 0;
					clearBoard(board);
				}
			}
			else if (turn == 9) {
				cout << "Draw" << endl;
				PrintArr(board);
				cout << "Wanna play again: y/n\n";
				cin >> c;
				if (c == 'n') {
					isRunning = false;
				}
				else if (c == 'y') {
					turn = 0;
					clearBoard(board);
					}
				}

			}
		}

	}

	void PrintArr(char A[][SIZE]) {
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}

	char checkBoard(char b[][SIZE]) {
		for (int i = 0; i < SIZE; i++) {
			if (b[i][0] == b[i][1] && b[i][1] == b[i][2] && b[i][1] != '_')
				return b[i][1];
			if (b[0][i] == b[1][i] && b[1][i] == b[2][i] && b[1][i] != '_')
				return b[1][i];
		}
		if (b[0][0] == b[1][1] && b[1][1] == b[2][2] && b[1][1] != '_')
			return b[1][1];

		if (b[0][2] == b[1][1] && b[1][1] == b[2][0] && b[1][1] != '_')
			return b[1][1];

		return 'N';
	}



	void clearBoard(char board[][SIZE]) {
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				board[i][j] = '_';
			}
		}
	}
