n = int(input())

for i in range(1, n * 2):
    for j in range(1, n * 2):
        if j == 1 or j == n * 2 - 1:
            # ans += "#"
            print('#',end="")
        elif i == j and i in range(2, n * 2 - 1):
            # ans += "#"
            print('#',end="")
        else:
            # ans += " "
            print(' ',end="")
    if i < n * 2 - 1:
        # ans += "\n"
        print( )
# print(ans)


