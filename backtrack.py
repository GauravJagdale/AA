def print_board(board, N):
    for i in range(N):
        for j in range(N):
            print(board[i][j], end='   ')
        print()
        print()


def isSafe(board, row, col, N):
    for i in range(col):
        if board[row][i] == 1:
            return False

    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    for i, j in zip(range(row, N, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    return True


def solve_back_track(board, col, N):
    if col >= N:
        return True

    for i in range(N):

        if isSafe(board, i, col, N):
            board[i][col] = 1

            if solve_back_track(board, col + 1, N):
                return True
            board[i][col] = 0

    return False


n = int(input("Enter value of N:"))

if n < 4:
    print("This is not solvable")
else:
    start = [[0 for _ in range(n)] for _ in range(n)]
    print("Initial State")
    print_board(start, n)

    print()

    print("Solved board:")
    solve_back_track(start, 0, n)
    print_board(start, n)
