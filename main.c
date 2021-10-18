#include <stdio.h>

int game_grid(int position_value[]) {
    printf("\n     |     |     ");
    printf("\n__%d__|__%d__|__%d__", position_value[0], position_value[1], position_value[2]);
    printf("\n     |     |     ");
    printf("\n__%d__|__%d__|__%d__", position_value[3], position_value[4], position_value[5]);
    printf("\n     |     |     ");
    printf("\n  %d  |  %d  |  %d  ", position_value[6], position_value[7], position_value[8]);
}

int main() {
    int position_value[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    game_grid(position_value);
}
