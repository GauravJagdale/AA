
N = int(input("Enter value of N:"))

board = [[0 for i in range(N)] for j in range(N)]

slashCode = [[0 for i in range(N)] for j in range(N)]
backslashCode = [[0 for i in range(N)] for j in range(N)]


row_occupied = [False] * N

x = 2 * N - 1
slash_code_occupied = [False] * x
backslash_code_occupied = [False] * x

for row in range(N):
    for col in range(N):
        slashCode[row][col] = row + col
        backslashCode[row][col] = row - col + N-1


def print_board(board):
    for i in range(N):
        for j in range(N):
            print(board[i][j], end="   ")
        print()
        print()


def isSafe(row, col):
    if (slash_code_occupied[slashCode[row][col]] or
            backslash_code_occupied[backslashCode[row][col]] or
            row_occupied[row]):
        return False
    return True


def solve_n_queens(board, col):

    if (col >= N):
        return True
    for i in range(N):
        if (isSafe(i, col)):
            board[i][col] = 1
            row_occupied[i] = True
            slash_code_occupied[slashCode[i][col]] = True
            backslash_code_occupied[backslashCode[i][col]] = True

            if (solve_n_queens(board, col + 1)):
                return True

            board[i][col] = 0
            row_occupied[i] = False
            slash_code_occupied[slashCode[i][col]] = False
            backslash_code_occupied[backslashCode[i][col]] = False

    return False


if solve_n_queens(board, 0):
    print_board(board)
else:
    print("Solution does not exist")
