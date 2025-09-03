#include "Board.h"
#include <iostream>

constexpr int EmptyCell = 0;

Board::Board() {
  for (auto &row : grid) {
    row.fill(EmptyCell);
  }
}

Board::~Board() = default;

// ----------------- Cell Access -----------------
int Board::getCell(int row, int col) const { return grid[row][col]; }

void Board::setCell(int row, int col, int value) { grid[row][col] = value; }

bool Board::isInside(int row, int col) const {
  return row >= 0 && row < Row && col >= 0 && col < Column;
}

bool Board::isEmpty(int row, int col) const {
  return isInside(row, col) && grid[row][col] == EmptyCell;
}

// ----------------- Row Checks -----------------
bool Board::isRowFull(int row) const {
  for (int col = 0; col < Column; col++) {
    if (grid[row][col] == EmptyCell) {
      return false;
    }
  }
  return true;
}

bool Board::isRowEmpty(int row) const {
  for (int col = 0; col < Column; col++) {
    if (grid[row][col] != EmptyCell) {
      return false;
    }
  }
  return true;
}

// ----------------- Rendering -----------------
void Board::drawGrid() const {
  std::cout << "\033[2J\033[H" << std::flush; // Clear terminal

  for (int row = 0; row < Row; row++) {
    for (int col = 0; col < Column; col++) {
      std::cout << (grid[row][col] == EmptyCell ? ". " : "# ");
    }
    std::cout << "\n";
  }
}

// ----------------- Row Manipulation -----------------
void Board::clearRow(int row) {
  for (int col = 0; col < Column; col++) {
    grid[row][col] = EmptyCell;
  }
}

void Board::moveRowDown(int row, int numRows) {
  for (int col = 0; col < Column; col++) {
    grid[row + numRows][col] = grid[row][col];
    grid[row][col] = EmptyCell;
  }
}

void Board::clearFullRows() {
  int cleared = 0;
  for (int r = Row - 1; r >= 0; r--) {
    if (isRowFull(r)) {
      clearRow(r);
      cleared++;
    } else if (cleared > 0) {
      moveRowDown(r, cleared);
    }
  }
}
