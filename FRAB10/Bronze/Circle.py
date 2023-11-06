def Circle(c, r):
    res = 1
    res1 = 1
    res2 = 1
    for i in range(1, c + 1):
        res *= i
    for i in range(1, c - r + 1):
        res1 *= i
    for i in range(1, r + 1):
        res2 *= i
    res = ( res // res1 ) // res2
    permu = 1
    for i in range(1,r):
        permu *= i
    
    res *= permu
    
    if r != 1: return res // 2    
    else: return res

if __name__ == "__main__":
    print(Circle(0,0))