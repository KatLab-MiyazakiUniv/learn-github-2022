#include<stdio.h>
enum class Direction{N, NE, E, SE, S, SW, W, NW};

struct Coordinate{
    int y;
    int x;
};

Direction calcNextDirection(Coordinate& currentCoordinate, Coordinate& nextCoordinate){
    int xDiff = nextCoordinate.x - currentCoordinate.x;
    int yDiff = nextCoordinate.y - currentCoordinate.y;

    if(xDiff < 0){
        if(yDiff < 0) {
            return Direction::NW;
        } else if(yDiff == 0){
            return Direction::W;
        } else if(yDiff > 0){
            return Direction::SW;
        }
    } else if(xDiff == 0){
        if(yDiff < 0){
            return Direction::N;
        } else {
            return Direction::S;
        }
    } else if(xDiff > 0){
        if(yDiff < 0){
            return Direction::NE;
        } else if(yDiff == 0){
            return Direction::E;
        } else if(yDiff > 0){
            return Direction::SE;
        }
    }
}

int main(){
    Coordinate currentCoordinate = {0,2};
    Coordinate nextCoordinate = {1,2};
    Direction direction = calcNextDirection(currentCoordinate,nextCoordinate);
    printf("%d\n",int(direction));
}





