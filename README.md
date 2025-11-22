# C Sudoku Solver

A fast and efficient Sudoku solver implemented in C using the backtracking algorithm. This project can solve standard 9x9 Sudoku puzzles quickly and displays the solution in a nicely formatted grid.

## Features

- **Backtracking Algorithm**: Efficient recursive solution with pruning
- **Clean Code Structure**: Well-organized with separate header and source files
- **Pretty Output**: Formatted grid display with borders for easy reading
- **Example Puzzles**: Includes sample puzzles of varying difficulty
- **Cross-Platform**: Works on Linux, macOS, and Windows

## Project Structure

```
C-SudokuSolver/
├── src/                    # Source files
│   ├── main.c             # Main program entry point
│   └── sudoku.c           # Sudoku solver implementation
├── include/               # Header files
│   └── sudoku.h          # Function declarations and constants
├── examples/              # Sample puzzles
│   └── puzzles.md        # Example Sudoku puzzles
├── Makefile              # Build configuration
└── README.md             # This file
```

## Algorithm

This solver uses the **backtracking algorithm**, which:

1. Finds the first empty cell (marked with 0)
2. Tries numbers 1-9 in that cell
3. Checks if the number is valid (follows Sudoku rules)
4. If valid, recursively solves the rest of the puzzle
5. If no valid number works, backtracks and tries the next number
6. Continues until the puzzle is solved or determined unsolvable

### Time Complexity
- **Worst Case**: O(9^(n²)) where n=9 for a 9x9 grid
- **Average Case**: Much better due to constraint propagation and early pruning

## Getting Started

### Prerequisites

- GCC compiler (or any C compiler)
- Make (optional, for easy building)

### Building the Project

#### Using Make (Recommended)
```bash
# Build the project
make

# Build and run
make run

# Clean build files
make clean

# Build with debug symbols
make debug

# Build optimized release version
make release
```

#### Manual Compilation
```bash
gcc -Wall -Wextra -std=c99 -Iinclude src/*.c -o sudoku_solver
```

### Running the Solver

```bash
./sudoku_solver
```

## Usage

The program currently includes a built-in example puzzle. When you run it, you'll see:

1. The original puzzle with empty cells shown as dots (.)
2. A "Solving..." message
3. The complete solution in a formatted grid

### Sample Output
```
=== C Sudoku Solver ===
Using Backtracking Algorithm

Original Puzzle:
+-------+-------+-------+
| 5 3 . | . 7 . | . . . | 
| 6 . . | 1 9 5 | . . . | 
| . 9 8 | . . . | . 6 . | 
+-------+-------+-------+
| 8 . . | . 6 . | . . 3 | 
| 4 . . | 8 . 3 | . . 1 | 
| 7 . . | . 2 . | . . 6 | 
+-------+-------+-------+
| . 6 . | . . . | 2 8 . | 
| . . . | 4 1 9 | . . 5 | 
| . . . | . 8 . | . 7 9 | 
+-------+-------+-------+

Solving...

Solution found!
+-------+-------+-------+
| 5 3 4 | 6 7 8 | 9 1 2 | 
| 6 7 2 | 1 9 5 | 3 4 8 | 
| 1 9 8 | 3 4 2 | 5 6 7 | 
+-------+-------+-------+
| 8 5 9 | 7 6 1 | 4 2 3 | 
| 4 2 6 | 8 5 3 | 7 9 1 | 
| 7 1 3 | 9 2 4 | 8 5 6 | 
+-------+-------+-------+
| 9 6 1 | 5 3 7 | 2 8 4 | 
| 2 8 7 | 4 1 9 | 6 3 5 | 
| 3 4 5 | 2 8 6 | 1 7 9 | 
+-------+-------+-------+
```

## Customizing Puzzles

To solve your own puzzles, modify the `load_example_puzzle()` function in `src/sudoku.c` or create a new function. Use this format:

- `0` for empty cells
- `1-9` for filled cells

Example:
```c
int puzzle[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    // ... continue for all 9 rows
};
```

## Code Overview

### Key Functions

- `solve_sudoku()`: Main recursive backtracking function
- `find_unassigned_location()`: Finds the next empty cell
- `is_safe()`: Checks if a number can be placed in a cell
- `used_in_row()`, `used_in_col()`, `used_in_box()`: Validation helpers
- `print_grid()`: Pretty-prints the Sudoku grid
- `load_example_puzzle()`: Loads a sample puzzle

### Constants

- `N = 9`: Size of the Sudoku grid
- `UNASSIGNED = 0`: Value representing empty cells

## Development

### Adding New Features

Some ideas for enhancements:
- File input/output for puzzle loading
- Multiple solving algorithms (bit masking, constraint propagation)
- Performance timing and statistics
- Interactive puzzle input
- GUI interface

### Code Style

- Uses clean, readable C code
- Follows consistent naming conventions
- Includes comprehensive comments
- Proper error handling and input validation

## Reference

This implementation is based on the backtracking approach described in:
- [GeeksforGeeks: Sudoku in C](https://www.geeksforgeeks.org/c/sudoku-in-c/)

## License

This project is open source and available under the MIT License.

## Contributing

Feel free to fork this project and submit pull requests for any improvements

---
