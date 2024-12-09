#include <stdio.h>

void  displayBord(char board[3][3])
{
    printf("\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < 2)
                printf("|");
        }
        if (i < 2)
            printf("\n-----------\n");
    }
    printf("\n\n");
    
} 

int getPlayerMove(char board[3][3])
{
    int move;
    while (1)
    {
        printf("enter your move (1-9):");
        scanf("%d" , &move);

        if (move < 1 || move > 9)
        {
            printf("Invalid move! Please choose a number between 1 and 9.\n");
            while (getchar() != '\n');
            continue;
        }

        int row = (move - 1) / 3;
        int col = (move - 1) % 3; 

        if (board[row][col] == 'X' || board[row][col] == 'O')
            printf("Cell already occupied! Choose another.\n");
        else
            return (move);
    }
    

}
void update_board(char board[3][3], int move, char symbol)
{
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    board[row][col] = symbol;
}

char checkWin(char board[3][3])
{
    
    for (size_t i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return (board[i][0]);
    }

    for (size_t i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return (board[0][i]);
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return (board[0][0]);
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return (board[0][2]);

    return (' ');
}

int checkdraw(char board[3][3])
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return (0);
            }
        }
        
    }
    return (1); 
    
}

int main(void)
{
    char board[3][3] =
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    } ;

    int move;
    int thePlayer = 1;
    char symbol;
    char winner;

    printf("Welcome to Tic-Tac-Toe! \n");

    while (1)
    {
        displayBord(board);

        if (thePlayer == 1)
            symbol = 'X';
        else
            symbol = 'O';
        printf("Player {%d} s turn {%c}: \n", thePlayer, symbol);

        move = getPlayerMove(board);
        update_board( board,  move, symbol);

        winner = checkWin(board);

        if (winner != ' ')
        {
            displayBord(board);
            if (winner == 'X')
                thePlayer = 1;
            else
                thePlayer = 2;
            printf("player {%d} wins the game Congratulations! \n", thePlayer);\
            break;
        }

        if (checkdraw(board))
        {
            displayBord(board);
            printf("It's a draw! Good game!\n");
            break;
        }


        if (thePlayer == 1)
            thePlayer = 2;
        else
            thePlayer = 1;
        
    }
    

    return (0);
}