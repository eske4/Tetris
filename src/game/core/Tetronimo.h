#pragma once
#include <array>

struct BlockPos {
  int row;
  int col;
  BlockPos() : row(0), col(0) {}
  BlockPos(int r, int c) : row(r), col(c) {}
};

class Tetronimo {
public:
  Tetronimo();
  Tetronimo(BlockPos startOffset);
  ~Tetronimo();

private:
  int rotationState;
  BlockPos startOffset;
  BlockPos offset;

  std::array<std::array<BlockPos, 4>, 4> tiles;
};
