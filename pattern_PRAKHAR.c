#include <stdio.h>

void printP(int rows, int i);
void printR(int rows, int i);
void printA(int rows, int i);
void printK(int rows, int i);
void printH(int rows, int i);
void printA2(int rows, int i);
void printR2(int rows, int i);

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++) {
        printP(rows, i);
        printf("   ");
        printR(rows, i);
        printf("   ");
        printA(rows, i);
        printf("   ");
        printK(rows, i);
        printf("   ");
        printH(rows, i);
        printf("   ");
        printA2(rows, i);
        printf("   ");
        printR2(rows, i);
        printf("\n");
    }
    return 0;
}

void printP(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (j == 0 || (i == 0 && j < rows - 1) || (i == rows / 2 && j < rows - 1) || (j == rows - 1 && i > 0 && i < rows / 2))
            printf("* ");
        else
            printf("  ");
    }
}

void printR(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (j == 0 || (i == 0 && j < rows - 1) || (i == rows / 2 && j < rows - 1) || (j == rows - 1 && i > 0 && i < rows / 2) || (i > rows / 2 && j == i - rows / 2))
            printf("* ");
        else
            printf("  ");
    }
}

void printA(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (j == 0 || j == rows - 1 || i == rows / 2 || (i == 0 && j > 0 && j < rows - 1))
            printf("* ");
        else
            printf("  ");
    }
}

void printK(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (j == 0 || (i + j == rows / 2) || (i - j == rows / 2))
            printf("* ");
        else
            printf("  ");
    }
}

void printH(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (j == 0 || j == rows - 1 || i == rows / 2)
            printf("* ");
        else
            printf("  ");
    }
}

void printA2(int rows, int i) {
    printA(rows, i);
}

void printR2(int rows, int i) {
    printR(rows, i);
}
