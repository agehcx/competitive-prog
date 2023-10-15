def KhaoYai(x):
    a = x[0]
    b = x[1]
    if(len(a) != len(b)):
        return "Error"
    if(len(a) == 0 or len(b) == 0):
        return "Error"
    for i in a:
        if type(i) is not int: return "Error"
        if int(i) < 0: return "Error"
    for i in b:
        if type(i) is not int: return "Error"
        if int(i) < 0: return "Error"
    mxh = max(a)
    mxl = 0
    ans = ""
    res = []
    l = []
    for i in range(len(a)):
        l.append([a[i],b[i]])
    for i in l:
        res.append(i[1])
        mxl = max(mxl, i[1] + 2 * i[0] - 1)
    mt =  [ [' '] * mxl for _ in range (mxh) ]
    chk = [ [False] * mxl for _ in range (mxh) ]
    # print(mxl)
    # print(l)
    cc = ord('A')
    for it in l:
        f = it[0]
        s = it[1]
        dy = mxh - 1
        dx = s
        for i in range (f - 1):
            if chk[dy][dx] == False: mt[dy][dx] = '*'
            for j in range (mxh - 1, dy - 1, -1): chk[j][dx] = True
            dy = dy - 1
            dx = dx + 1
        for i in range (f - 1):
            if chk[dy][dx] == False: mt[dy][dx] = '*'
            for j in range (mxh - 1, dy - 1, -1): chk[j][dx] = True
            dy = dy + 1
            dx = dx + 1
        for i in range (2 * f - 1): mt[mxh - 1][i + s] = '*'
        if not str(mt[dy - f + 1][dx - f + 1]).isalpha() : mt[dy - f + 1][dx - f + 1] = chr(cc)
        cc = (cc + 1 - ord('A')) % 26 + ord('A')
    for i in range (mxl):
        Check = False
        for j in range (mxh):
            if Check == False and mt[j][i] != ' ' and (mt[j][i] == '*' or mt[j][i].isalpha()):
                Check = True
            elif Check == True:
                if mt[j][i] == '*': mt[j][i] = '-'
                elif mt[j][i] == ' ': mt[j][i] = '-'
    for i in range (mxl):
        mt[mxh - 1][i] = '_'
    for i in range (min(res),mxl):
        mt[mxh - 1][i] = '*'
    for i in range (len(mt)):
        x = ''.join(mt[i][1:]) + '\n'
        ans+=(x)
        
    return ans
    

if __name__ == "__main__":
    print(KhaoYai([[3,5,4,3],[1,3,7,9]]))