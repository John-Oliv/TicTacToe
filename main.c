#include <stdio.h>

void gameGrid(int positionValue[]) {
    printf("\n     |     |     ");
    printf("\n__%c__|__%c__|__%c__", positionValue[0], positionValue[1], positionValue[2]);
    printf("\n     |     |     ");
    printf("\n__%c__|__%c__|__%c__", positionValue[3], positionValue[4], positionValue[5]);
    printf("\n     |     |     ");
    printf("\n  %c  |  %c  |  %c  ", positionValue[6], positionValue[7], positionValue[8]);
}

void assignPlayerOnePosition(int positionValue[], int playerOneInput) {
    printf("\nPlayer 1 please input the position you would like to put the X: ");
    scanf("%d", &playerOneInput);
    if (playerOneInput + 48 == positionValue[playerOneInput]) {
        positionValue[playerOneInput] = ('X');
        gameGrid(positionValue);
    }
}

void assignPlayerTwoPosition(int positionValue[], int playerTwoInput) {
    printf("\nPlayer 2 please input the position you would like to put the O: ");
    scanf("%d", &playerTwoInput);
    if (playerTwoInput + 48 == positionValue[playerTwoInput]) {
        positionValue[playerTwoInput] = ('O');
            gameGrid(positionValue);
    }
}

int main() {
    int positionValue[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int playerOneInput, playerTwoInput;
    gameGrid(positionValue);
    assignPlayerOnePosition(positionValue, playerOneInput);
    assignPlayerTwoPosition(positionValue, playerTwoInput);
}