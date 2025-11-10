#include <stdio.h>
#include <stdlib.h>
#include "../include/sudoku.h"

int main(void)
{
    // Grid to store the Sudoku puzzle
    // 0 means unassigned cells
    int grid[N][N];
    
    printf("=== C Sudoku Solver ===\n");
    printf("Using Backtracking Algorithm\n");
    
    // Load example puzzle
    load_example_puzzle(grid);
    
    printf("\nOriginal Puzzle:");
    print_grid(grid);
    
    printf("\nSolving...\n");
    
    if (solve_sudoku(grid) == 1) {
        printf("\nSolution found!");
        print_grid(grid);
    } else {
        printf("\nNo solution exists for this puzzle.\n");
    }
    
    return 0;
}