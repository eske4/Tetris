#include "Tetronimo.h"
#include "Board.h"

Tetronimo::Tetronimo() { offset = BlockPos(Board::Row, Board::Column); }
Tetronimo::Tetronimo(BlockPos startOffset) { startOffset = startOffset; }
