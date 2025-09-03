#pragma once
#include <array>

class Board {
public:
  static constexpr int Row = 22;
  static constexpr int Column = 10;
  static constexpr int EmptyCell = 0;

  Board();
  ~Board();

  int getCell(int row, int column) const;
  void setCell(int row, int column, int val);
  void clearFullRows();
  void drawGrid() const;

  bool isInside(int row, int column) const;
  bool isEmpty(int row, int column) const;
  bool isRowFull(int row) const;
  bool isRowEmpty(int row) const;

private:
  std::array<std::array<int, Column>, Row> grid;
  void clearRow(int row);
  void moveRowDown(int row, int numRows);
};
