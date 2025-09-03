#include "Board.h"
#include <iostream> // Include the iostream library for input and output
int main() {        // Entry point of the program
  Board board;
  for (int i = 0; i < Board::Column; i++) {
    board.setCell(0, i, 3);
  }

  for (int i = 0; i < Board::Column; i++) {
    board.setCell(Board::Row - 1, i, 3);
  }

  for (int i = 0; i < Board::Column; i++) {
    board.setCell(Board::Row - 2, i, 3);
  }

  board.setCell(Board::Row - 2, 6, 0);

  board.drawGrid();
  board.clearFullRows();
  board.drawGrid();

  return 0;
}
