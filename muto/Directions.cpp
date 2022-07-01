#include <stdio.h>
#include <cmath>

enum class Direction { N, NE, E, SE, S, SW, W, NW };

struct Coordinate {
  int x;
  int y;
};

Direction calcNextDirection(Coordinate& current, Coordinate& next)
{
  Direction nextDir;

  if(next.x - current.x > 0) {
    if(next.y - current.y > 0) {
      nextDir = Direction::SE;
    } else if(next.y - current.y < 0) {
      nextDir = Direction::NE;
    } else {
      nextDir = Direction::E;
    }
  } else if(next.x - current.x < 0) {
    if(next.y - current.y > 0) {
      nextDir = Direction::SW;
    } else if(next.y - current.y < 0) {
      nextDir = Direction::NW;
    } else {
      nextDir = Direction::W;
    }
  } else {
    if(next.y - current.y > 0) {
      nextDir = Direction::S;
    } else {
      nextDir = Direction::N;
    }
  }

  return nextDir;
}

int main()
{
  Coordinate current = { 1, 1 };
  Coordinate next = { 0, 1 };
  printf("%d", (int)calcNextDirection(current, next));

  return 0;
}
