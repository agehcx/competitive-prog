def count_paths(x, y, z):
    dp = [[[0 for _ in range(z + 1)] for _ in range(y + 1)] for _ in range(x + 1)]
    dp[0][0][0] = 1
    
    for i in range(x + 1):
        for j in range(y + 1):
            for k in range(z + 1):
                if i > 0: dp[i][j][k] += dp[i - 1][j][k]
                if j > 0: dp[i][j][k] += dp[i][j - 1][k]
                if k > 0: dp[i][j][k] += dp[i][j][k - 1]
    
    return dp[x][y][z]

if __name__ == "__main__":
    print(count_paths(2, 2, 2))
