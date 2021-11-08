#include <stdio.h>

void gameGrid(int positionValue[]) {
    printf("\n     |     |     ");
    printf("\n__%c__|__%c__|__%c__", positionValue[0], positionValue[1],
           positionValue[2]);
    printf("\n     |     |     ");
    printf("\n__%c__|__%c__|__%c__", positionValue[3], positionValue[4],
           positionValue[5]);
    printf("\n     |     |     ");
    printf("\n  %c  |  %c  |  %c  ", positionValue[6], positionValue[7],
           positionValue[8]);
}

void assignPlayerOnePosition(int positionValue[], int playerOneInput) {
    printf(
        "\nPlayer 1 please input the position you would like to put the X: ");
    scanf("%d", &playerOneInput);
    while (positionValue[playerOneInput] == 'O' || playerOneInput > 8 || playerOneInput < 0) {
        printf("\nPlayer 1 please input a valid position: ");
        scanf("%d", &playerOneInput);
    }
    if (playerOneInput + 48 == positionValue[playerOneInput]) {
        positionValue[playerOneInput] = ('X');
        gameGrid(positionValue);
    }
}

void assignPlayerTwoPosition(int positionValue[], int playerTwoInput) {
    printf(
        "\nPlayer 2 please input the position you would like to put the O: ");
    scanf("%d", &playerTwoInput);
    while (positionValue[playerTwoInput] == 'X'|| playerTwoInput > 8 || playerTwoInput < 0) {
        printf("\nPlayer 2 please input a valid position: ");
        scanf("%d", &playerTwoInput);
    }

    if (playerTwoInput + 48 == positionValue[playerTwoInput]) {
        positionValue[playerTwoInput] = ('O');
        gameGrid(positionValue);
    }
}

void checkGameWinnerX(int positionValue[], int winner) {
    if (positionValue[0] == 'X' && positionValue[1] == 'X' &&
        positionValue[2] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[3] == 'X' && positionValue[4] == 'X' &&
               positionValue[5] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[6] == 'X' && positionValue[7] == 'X' &&
               positionValue[8] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[0] == 'X' && positionValue[3] == 'X' &&
               positionValue[6] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[1] == 'X' && positionValue[4] == 'X' &&
               positionValue[7] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[2] == 'X' && positionValue[5] == 'X' &&
               positionValue[8] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[0] == 'X' && positionValue[4] == 'X' &&
               positionValue[8] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[2] == 'X' && positionValue[4] == 'X' &&
               positionValue[8] == 'X') {
        winner = 1;
        printf("\nPlayer One Wins");
        exit(0);
    } else if (positionValue[0] != '0' && positionValue[1] != '1' &&
               positionValue[2] != '2' && positionValue[3] != '3' &&
               positionValue[4] != '4' && positionValue[5] != '5' &&
               positionValue[6] != '6' && positionValue[7] != '7' &&
               positionValue[8] != '8') {
        printf("\nDraw");
        exit(0);
    } else {
        return 0;
    }
}

void checkGameWinnerO(int positionValue[], int winner) {
    if (positionValue[0] == 'O' && positionValue[1] == 'O' &&
        positionValue[2] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[3] == 'O' && positionValue[4] == 'O' &&
               positionValue[5] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[6] == 'O' && positionValue[7] == 'O' &&
               positionValue[8] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[0] == 'O' && positionValue[3] == 'O' &&
               positionValue[6] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[1] == 'O' && positionValue[4] == 'O' &&
               positionValue[7] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[2] == 'O' && positionValue[5] == 'O' &&
               positionValue[8] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[0] == 'O' && positionValue[4] == 'O' &&
               positionValue[8] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[2] == 'O' && positionValue[4] == 'O' &&
               positionValue[8] == 'O') {
        winner = 1;
        printf("\nPlayer Two Wins");
        exit(0);
    } else if (positionValue[0] != '0' && positionValue[1] != '1' &&
               positionValue[2] != '2' && positionValue[3] != '3' &&
               positionValue[4] != '4' && positionValue[5] != '5' &&
               positionValue[6] != '6' && positionValue[7] != '7' &&
               positionValue[8] != '8') {
        printf("\nDraw");
        exit(0);
    } else {
        return 0;
    }
}

int main() {
    int positionValue[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int playerOneInput, playerTwoInput, winner = 0;
    gameGrid(positionValue);
    while (winner == 0) {
        assignPlayerOnePosition(positionValue, playerOneInput);
        checkGameWinnerX(positionValue, winner);
        assignPlayerTwoPosition(positionValue, playerTwoInput);
        checkGameWinnerO(positionValue, winner);
    }
}