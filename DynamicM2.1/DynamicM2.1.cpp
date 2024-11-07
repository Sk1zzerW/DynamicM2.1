#include <iostream>
using namespace std;

void addColumn(int**& array, int rows, int currentCols, int* newColumn, int position) {
    int** newArray = new int* [rows];
    for (int i = 0; i < rows; i++) {
        newArray[i] = new int[currentCols + 1];
        int colIndex = 0;
        for (int j = 0; j <= currentCols; j++) {
            if (j == position) {
                newArray[i][j] = newColumn[i];
            }
            else {
                newArray[i][j] = array[i][colIndex++];
            }
        }
    }

    for (int i = 0; i < rows; i++) delete[] array[i];
    delete[] array;
    array = newArray;
}
