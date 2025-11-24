//Gabriel Cabezudo
//11/23/2025
//This program implements a simple Tic Tac Toe game for two players

#include <iostream>
using namespace std;

const int SIZE = 3; //size of the Tic Tac Toe board
char board[SIZE][SIZE]; //the board using 2D array
char currentPlayer; //to track whos turn it is

//function to initialize the board with empty spaces
void initializeBoard() { 
    for (int i = 0; i < SIZE; ++i) //loop through rows
        for (int j = 0; j < SIZE; ++j) //loop through columns
            board[i][j] = ' '; //set each cell to empty space
}
//function to print the current board
void printBoard() {
    cout << "  0 1 2\n"; //column headers
    for (int i = 0; i < SIZE; ++i) { 
        cout << i << " "; //row header
        for (int j = 0; j < SIZE; ++j) { 
            cout << board[i][j]; //print whats in the cell
            if (j < SIZE - 1) cout << "|"; //print the column lines for board
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "  -----\n"; //print the row lines for board
    }
}
//function to check if current player has won
bool checkWin() {
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
            return true; //check rows
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
            return true; //check columns
    }
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
        return true; //check diagonal
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
        return true; 
    return false; //no win
}
//function to check if the board is full
bool isBoardFull() {
    for (int i = 0; i < SIZE; ++i) 
        for (int j = 0; j < SIZE; ++j)
            if (board[i][j] == ' ') //if any cell is empty
                return false; //found an empty space
    return true; //board is full
}
//main function to run the game
int main() {
    initializeBoard(); //set up the board
    currentPlayer = 'X';//X always starts first
    int row, col; //variables to hold player input
    while (true) { 
        printBoard();
        cout << "Player " << currentPlayer << ", enter your move (row and column): "; //prompt for input
        cin >> row >> col; //get player input
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            cout << "Invalid move. Try again.\n"; //check for valid move
            continue; //ask for input again
        }

        board[row][col] = currentPlayer; //place the player's mark on the board
        if (checkWin()) { //check for a win
            printBoard(); //print the final board
            cout << "Player " << currentPlayer << " wins!\n"; //announce the winner
            break; //end the game
        }
        if (isBoardFull()) { //check for a draw
            printBoard(); //print the final board
            cout << "It's a draw!\n"; //announce the draw
            break; //end the game
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}