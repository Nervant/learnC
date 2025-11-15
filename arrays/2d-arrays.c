#include <stdio.h>

// 2d array = an array where each element is another array
//                    useful for matrices, tables, or grids

int main(){

    char numpad[][3] = {
        {'1', '2', '3'}, 
        {'4', '5', '6'}, 
        {'7', '8', '9'}, 
        {'*', '0', '#'}
    };

    int rows = sizeof(numpad) / sizeof(numpad[0]);
    int cols = sizeof(numpad[0]) / sizeof(numpad[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
 * 2D ARRAYS:
 * 
 * syntax:
 * datatype arrayName[rows][cols];
 * 
 * example:
 * char numpad[][3] = {
 *     {'1', '2', '3'},
 *     {'4', '5', '6'},
 *     {'7', '8', '9'},
 *     {'*', '0', '#'}
 * };
 * 
 * key points:
 * - index format: array[row][col]
 * - nested loops print each row and column
 * - sizeof(array) / sizeof(array[0]) = # of rows
 * - sizeof(array[0]) / sizeof(array[0][0]) = # of columns
 */
