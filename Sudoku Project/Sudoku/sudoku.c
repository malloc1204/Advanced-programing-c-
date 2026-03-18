#define _CRT_SECURE_NO_WARNINGS 1       // Visual Studio需要

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 不要修改以下函数声明
void Sudoku(void);
void printSudoku();
void fillValues();
void fillDiagonal();
int fillRemaining(int i, int j);
void removeKDigits();
void fillBox(int row, int col);
int randomGenerator(int num);
int unUsedInRow(int i, int num);
int unUsedInCol(int j, int num);


int M[9][9];                // 9x9的数字阵
int K;                      // 一局中需要填入的数字个数
int SRN;                    // 生成随机布局所需的随机数；不要修改

int JUDGE(int m[]){
    int i,j;
    int judge=1;
    for(i=0;i<=8;i++){
        for(j=i+1;j<=8;j++){
            if(m[i]==m[j]){
                judge=0;
                break;
            }
        }
    }
    return judge;
}

int checkRow(int row){
    int m[9];
    int i,j;
    for(i=0;i<=8;i++){
        m[i]=M[row][i];
    }
    return JUDGE(m[]);
}

int checkCol(int col){
    int m[9];
    int i,j;
    for(i=0;i<=8;i++){
        m[i]=M[i][col];
    }
    return JUDGE(m[]);
}

int checkSquare(int x,int y){
    int m[9];
    int i,j;
    for(i=0;i<=8;i++){
        m[i]=M[row][i];
    }
    return JUDGE(m[]);
}

int main(void)
{
    K = 20;                 // 未填的数字个数
    Sudoku();               // M[9][9]全部填0
    fillValues();           // 生成初始布局，未填的数字个数由K决定
    printSudoku();          // 显示9x9
    int row,col,num;
    while(1){
        printf("Please enter row:\n");
        scanf("%d",&row);
        printf("Please enter col:\n");
        scanf("%d",&col);
        printf("Please enter num:\n");
        scanf("%d",&num);
        row=row-1;
        col=col-1;
        M[row][col]=num;
        printSudoku();
    }
    return 0;
}


/********以下代码不要修改*********/
/********以下代码不要修改*********/
/********以下代码不要修改*********/
// Constructor
void Sudoku(void)
{
    int i, j;
    // Compute square root of 9
    SRN = (int)sqrt(9);

    // Create a row for every pointer
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            M[i][j] = 0;
}

// Sudoku Generator
void fillValues()
{

    // Fill the diagonal of SRN x SRN matrices
    fillDiagonal();

    // Fill remaining blocks
    fillRemaining(0, SRN);

    // Remove Randomly K digits to make game
    removeKDigits();
}

// Fill the diagonal SRN number of SRN x SRN matrices
void fillDiagonal()
{
    int i;
    for (i = 0; i < 9; i = i + SRN)
    {

        // for diagonal box, start coordinates->i==j
        fillBox(i, i);
    }
}
// Returns 0 if given 3 x 3 block contains num.
int unUsedInBox(int rowStart, int colStart, int num)
{
    int i, j;
    for (i = 0; i < SRN; i++) {
        for (j = 0; j < SRN; j++) {
            if (M[rowStart + i][colStart + j]
                == num) {
                return 0;
            }
        }
    }
    return 1;
}
// Fill a 3 x 3 matrix.
void fillBox(int row, int col)
{
    int num, i, j;
    for (i = 0; i < SRN; i++) {
        for (j = 0; j < SRN; j++) {
            do {
                num = randomGenerator(9);
            } while (!unUsedInBox(row, col, num));
            M[row + i][col + j] = num;
        }
    }
}
// Random generator
int randomGenerator(int num)
{
    return (int)floor(
        (float)(rand() / (double)RAND_MAX * num + 1));
}
// Check if safe to put in cell
int CheckIfSafe(int i, int j, int num)
{
    return (
        unUsedInRow(i, num) && unUsedInCol(j, num)
        && unUsedInBox(i - i % SRN, j - j % SRN, num));
}
// check in the row for existence
int unUsedInRow(int i, int num)
{
    int j;
    for (j = 0; j < 9; j++) {
        if (M[i][j] == num) {
            return 0;
        }
    }
    return 1;
}
// check in the row for existence
int unUsedInCol(int j, int num)
{
    int i;
    for (i = 0; i < 9; i++) {
        if (M[i][j] == num) {
            return 0;
        }
    }
    return 1;
}
// A recursive function to fill remaining
// matrix
int fillRemaining(int i, int j)
{
    int num;
    // System.out.println(i+" "+j);
    if (j >= 9 && i < 9 - 1) {
        i = i + 1;
        j = 0;
    }
    if (i >= 9 && j >= 9) {
        return 1;
    }
    if (i < SRN) {
        if (j < SRN) {
            j = SRN;
        }
    }
    else if (i < 9 - SRN) {
        if (j == (int)(i / SRN) * SRN) {
            j = j + SRN;
        }
    }
    else {
        if (j == 9 - SRN) {
            i = i + 1;
            j = 0;
            if (i >= 9) {
                return 1;
            }
        }
    }
    for (num = 1; num <= 9; num++) {
        if (CheckIfSafe(i, j, num)) {
            M[i][j] = num;
            if (fillRemaining(i, j + 1)) {
                return 1;
            }
            M[i][j] = 0;
        }
    }
    return 0;
}

// Remove the K no. of digits to
// complete game
void removeKDigits()
{
    int count = K;
    while (count != 0) {
        int cellId = randomGenerator(9 * 9) - 1;
        // System.out.println(cellId);
        // extract coordinates i and j
        int i = (cellId / 9);
        int j = cellId % 9;
        if (j != 0) {
            j = j - 1;
        }
        // System.out.println(i+" "+j);
        if (M[i][j] != 0) {
            count--;
            M[i][j] = 0;
        }
    }
}

void printSudoku()
{
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++)
            if (M[i][j] != 0)
                printf("%c ", M[i][j] + '0');
            else
                printf("_ ");
        printf("\n");
    }

    printf("\n");
}
