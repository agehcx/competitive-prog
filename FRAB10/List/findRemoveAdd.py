def findRemoveAdd1(a,b):
    selected_f = []
    selected_b = []
    res = []
    if len(a) == 0 or len(b) == 0:
        return "Error"
    for i in a:
        if len(i) == 0: return "Error"
    for i in b:
        if len(i) == 0: return "Error"
    for i in b:
        if len(a[i[0]][i[1]]) > i[0] + i[1]:
            selected_f.insert(0,a[i[0]][i[1]].upper())
        else:
            selected_b.append(a[i[0]][i[1]])
    res = selected_f
    for i in a:
        tmp = []
        for j in i:
            if j.upper() not in res and j not in selected_b:
                tmp.append(j)
        res.append(tmp)
    res += selected_b
    return res

if __name__ == "__main__":
    print(findRemoveAdd1([["ffeo", "dsp", "afdo"], ["asdk"], ["sd", "pop", "mks"], ["ssdsof"]], [[2,1],[2,0],[2,2],[3,0],[0,0],[0,2],[1,0]]))
    # print(findRemoveAdd1([["a"], ["bb", "ccc"], ["dd", "e"]], [[1,1],[2,0]]))
    # print(findRemoveAdd1([["easy", "list"], ["for", "every", "one"]], [[0,0],[0,1]]))