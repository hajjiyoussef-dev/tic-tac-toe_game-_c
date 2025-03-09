# Tic-Tac-Toe Game in C 
<br>

A simple implementation of the classic **Tic-Tac-Toe** game for two players, built using the C programming language. This game allows two players to take turns, and it checks for a winner or a draw. The game board is displayed after each move.

# Features
. Two-player gameplay
. Input validation (ensures the move is a valid number between 1 and 9)
. Winner detection (horizontal, vertical, and diagonal checks)
. Draw detection (when the board is full and no winner)
. Game restart option (can easily extend this feature)
# How to Play
1. Clone this repository to your local machine or download the .zip file.
2. Compile the code using a C compiler:
```c
gcc -o tictactoe tictactoe.c
```
3. Run the compiled program:
```bash

./tictactoe
```
4. The game will prompt Player 1 (X) and Player 2 (O) to take turns, entering a number between 1 and 9 corresponding to a position on the grid.
5. The game will display the updated board after each move, and it will announce the winner or a draw when the game ends.
# Game Board Layout
The board is represented as a 3x3 grid, where the numbers 1-9 represent the empty cells:


```markdown

 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9
 ```
. Player 1 (X) and Player 2 (O) take turns entering their moves by choosing a number between 1 and 9.
. The game ends when one player has three of their marks in a row (horizontally, vertically, or diagonally) or when all cells are filled, resulting in a draw.

# the CPU Player Feature
. CPU Logic: The CPU makes decisions based on the current board state. In this version, it plays a random valid move but can be enhanced in future  updates for smarter 
  gameplay.<br>
. Single-Player Mode: The CPU automatically takes its turn after the player.

# Code Overview
**Files**
**tictactoe.c**: Contains the main logic of the game (board display, input handling, win/draw detection).

# Functions
. **displayBoard(board)**: Displays the current game board.<br>
. **getPlayerMove(board)**: Prompts the current player for their move and validates the input.<br>
. **updateBoard(board, move, symbol)**: Updates the board with the player's move.<br>
. **checkWin(board)**: Checks if there is a winner.<br>
. **checkDraw(board)**: Checks if the game is a draw.<br>
# Requirements
. C compiler (e.g., GCC)<br>
. Terminal/Command Prompt
## License
. This project is open-source and available under the MIT License. See the LICENSE file for more information.

## Contributing
Feel free to fork this repository, make changes, and submit pull requests. Any improvements, bug fixes, or feature requests are welcome!

```markdown
## Created by [yhajji] 42 Network
```
