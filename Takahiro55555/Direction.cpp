#include <stdio.h>

enum Direction {
  NONE = -1,
  N = 0,
  NE = 1,
  E = 2,
  SE = 3,
  S = 4,
  SW = 5,
  W = 6,
  NW = 7
};

struct Coordinate {
  int x;
  int y;
};

struct NextDirectionTestCase {
  Coordinate current;
  Coordinate next;
  Direction expected;
  char testName[1024];
};

Direction calcNextDirection(Coordinate current, Coordinate next) {
  /**
   * @brief 現在地を方眼の中心点に立たせて、次の目標地点を決定する
   * - 現在地と目的地は隣り合っている前提（8近傍、斜めも含める）
   */
  Direction directionMap[3][3] = {{NW, N, NE}, {W, NONE, E}, {SW, S, SE}};
  Coordinate offset = {1 - current.x, 1 - current.y};
  return directionMap[offset.y + next.y][offset.x + next.x];
}

int main(void) {
  // FIXME: テストを全然パスできない...
  NextDirectionTestCase testcases[14] = {
      {{1, 1}, {0, 0}, NW, "case01"},   {{2, 1}, {1, 1}, N, "case02"},
      {{2, 0}, {1, 1}, NE, "case03"},   {{1, 1}, {1, 2}, E, "case04"},
      {{0, 0}, {1, 1}, SE, "case05"},   {{0, 1}, {1, 1}, S, "case06"},
      {{1, 1}, {2, 0}, SW, "case07"},   {{1, 1}, {1, 0}, W, "case08"},
      {{1, 1}, {1, 1}, NONE, "case09"}, {{1, 1}, {0, 0}, NW, "case10"},
      {{1, 1}, {0, 0}, NW, "case11"},   {{1, 1}, {0, 0}, NW, "case12"},
      {{1, 1}, {0, 0}, NW, "case13"},   {{1, 1}, {0, 0}, NW, "case14"}};

  for (int i = 0; i < 14; i++) {
    NextDirectionTestCase t = testcases[i];
    Direction result = calcNextDirection(t.current, t.next);
    char isPassed[1024];
    if (t.expected == result) {
      sprintf(isPassed, "passed");
    } else {
      sprintf(isPassed, "NOT PASSED");
    }
    printf("test name: '%s', current: (%d, %d), next: (%d, %d), calculated "
           "direction: %d, expected_direction: %d, %s\n",
           t.testName, t.current.x, t.current.y, t.next.x, t.next.y, result,
           t.expected, isPassed);
  }

  return 0;
}
