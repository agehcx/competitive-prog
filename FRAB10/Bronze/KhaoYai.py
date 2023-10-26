def KhaoYai(x):
    a = x[0]
    b = x[1]
    if len(a) != len(b):
        return "Error"
    if len(a) == 0 or len(b) == 0:
        return "Error"
    for i in a:
        if type(i) != int: return "Error"
    for i in b:
        if type(i) != int: return "Error"
    for i in a:
        if int(i) <= 0: return "Error"
    for i in b:
        if int(i) <= 0: return "Error"
    mxh = max(a)
    mxl = 0
    ans = ""
    res = []
    l = []
    for i in range(len(a)):
        l.append([a[i],b[i]])
    for i in l:
        mxl = max(mxl, i[1] + 2 * i[0] - 1)
    mt =  [ [' '] * mxl for _ in range (mxh) ]
    # chk = [ [False] * mxl for _ in range (mxh) ]
    mnr = 2**31-1
    for i in l:
        if i[0] != 1: mnr = min(mnr, i[1])
    # print(mxl)
    # print(l)
    cc = ord('A')
    for i in range (mxl):
        mt[mxh - 1][i] = '_'
    for i in range (mnr,mxl):
        mt[mxh - 1][i] = '*'
    for it in l:
        f = it[0]
        s = it[1]
        dy = mxh - 1
        dx = s
        for i in range (f - 1):
            # if chk[dy][dx] == False: 
            mt[dy][dx] = '*'
            # for j in range (mxh - 1, dy - 1, -1): chk[j][dx] = True
            dy = dy - 1
            dx = dx + 1
        for i in range (f - 1):
            # if chk[dy][dx] == False: 
            mt[dy][dx] = '*'
            # for j in range (mxh - 1, dy - 1, -1): chk[j][dx] = True
            dy = dy + 1
            dx = dx + 1
        for i in range (2 * f - 1): mt[mxh - 1][i + s] = '*'
        # if not str(mt[dy - f + 1][dx - f + 1]).isalpha(): mt[dy - f + 1][dx - f + 1] = chr(cc)
        if not str(mt[dy - f + 1][dx - f + 1]).isalpha(): mt[dy - f + 1][dx - f + 1] = chr(cc)
        else: mt[dy - f + 1][dx - f + 1] = chr(min(cc, ord(mt[dy - f + 1][dx - f + 1])))
        cc = (cc + 1 - ord('A')) % 26 + ord('A')
    for i in range (mxl):
        Check = False
        for j in range (mxh - 1):
            if Check == False and mt[j][i] != ' ' and (mt[j][i] == '*' or mt[j][i].isalpha()):
                Check = True
            elif Check == True:
                if mt[j][i] == '*': mt[j][i] = '-'
                elif mt[j][i] == ' ': mt[j][i] = '-'
    for i in range (len(mt)):
        idx = 0
        for j in range (len(mt[i])):
            if mt[i][j] == '*' or (mt[i][j].isalpha() and mt[i][j] != ' '): 
                idx = j
        idx += 1
        x = ''.join(mt[i][1:])
        # print(''.join(mt[i][1:idx])+'end')
        x = x + '\n'
        ans += x
        
    # print("CHK", ans == "")
    return ans
    

if __name__ == "__main__":
    print(KhaoYai([[5,4,5],[1,6,9]]))
    # print(KhaoYai([[3,5,4],[1,3,7]]))
    # print(KhaoYai([[10,9,8,7,6,5,4,3,2,1],[3,6,9,12,15,18,21,24,27,30]]))
    # print(KhaoYai([[5,7,3,4,6,1,2,3,6,1,3,7,9],[2,4,14,2,36,28,5,42,45,18,10,23,27]]))
    # print(KhaoYai([[5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5],[5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5]]))
    # print(KhaoYai([[5,17,32,14,2,34,19,28,9],[14,2,9,28,34,7,12,23,10]]))