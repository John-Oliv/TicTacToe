#include <stdio.h>

int gameGrid(int positionValue[]) {
    printf("\n     |     |     ");
    printf("\n__%d__|__%d__|__%d__", positionValue[0], positionValue[1], positionValue[2]);
    printf("\n     |     |     ");
    printf("\n__%d__|__%d__|__%d__", positionValue[3], positionValue[4], positionValue[5]);
    printf("\n     |     |     ");
    printf("\n  %d  |  %d  |  %d  ", positionValue[6], positionValue[7], positionValue[8]);
    return 0;
}

int main() {
    int positionValue[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    gameGrid(positionValue);
}
