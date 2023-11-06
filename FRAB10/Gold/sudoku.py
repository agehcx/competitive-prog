def sudoku(x):
    chkr = [True for _ in range (9)]
    chkc = [True for _ in range (9)]
    chkGrid = [True for _ in range (9)]
    for i in range(9):
        tmpr = [0 for _ in range (10)] 
        tmpc = [0 for _ in range (10)] 
        for j in x[i]: tmpr[j] += 1
        for j in range (9): tmpc[x[j][i]] += 1
        if any(j > 1 for j in tmpr[1:]): chkr[i] = False
        if any(j > 1 for j in tmpc[1:]): chkc[i] = False
    for i in range (3):
        for j in range(3):
            tmpg = [0 for _ in range (10)]
            for k in range (3):
                for l in range (3): tmpg[x[3 * i + k][3 * j + l]] += 1
            if any(j > 1 for j in tmpg[1:]): chkGrid[3 * i + j] = False
    if all(chkr + chkc + chkGrid): return True
    else: return False
                
if __name__ == "__main__":
    # print(sudoku( [ [5, 3, 4, 6, 7, 8, 9, 1, 2], [6, 7, 2, 1, 9, 5, 3, 4, 8], [1, 9, 8, 3, 4, 2, 5, 6, 7], [8, 5, 9, 7, 6, 1, 4, 2, 3], [4,2, 6, 8, 5, 3, 7, 9, 1], [7, 1, 3, 9, 2, 4, 8, 5, 6], [9, 6, 1, 5, 3, 7, 2, 8, 4], [2, 8, 7, 4, 1, 9, 6, 3, 5], [3, 4, 5, 2, 8, 6,1, 7, 9] ] ))
    print(sudoku( [ [5, 3, 4, 6, 7, 8, 9, 1, 2], [6, 7, 2, 1, 9, 5, 3, 4, 8], [1, 9, 8, 3, 4, 2, 5, 6, 7], [8, 5, 9, 7, 6, 1, 4, 2, 3], [4,2, 6, 8, 5, 3, 7, 9, 1], [7, 1, 3, 9, 2, 4, 8, 5, 6], [9, 6, 1, 5, 3, 7, 2, 8, 4], [2, 8, 7, 4, 1, 9, 6, 3, 5], [3, 4, 5, 4, 8, 2,1, 7, 9] ] ))
