#include "functions.hpp"

#include <iostream>
#include <vector>

using namespace std;

// REQUIRES: board is a rectangle and only has the characters, '-', 'X', and
// 'O'. player_char is either 'X' or 'O'.
// MODIFIES:
// EFFECTS: Returns true if there are 4 player_char characters in a diagonal on
// the board.
bool CheckDiagonal(const vector<vector<char>>& board, char player_char) {

  for (int i = 0; i < board.size() - 3; i++) {
    for (int j = 0; j < board[0].size() - 3; j++) {
      if (board[i][j] == board[i+1][j+1] && board[i][j] == board[i+2][j+2] && board[i][j] == board[i+3][j+3] && board[i][j] == player_char) {
        return true;
      }
    }
  }

  for (int i = 0; i < board.size() - 3; i++) {
    for (unsigned int j = board[0].size()-1; j > 2; j--) {
      if (board[i][j] == board[i+1][j-1] && board[i][j] == board[i+2][j-2] && board[i][j] == board[i+3][j-3] && board[i][j] == player_char) {
        return true;
      }
    }
  }

  return false;
}