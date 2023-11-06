def maxmin(x):
    s = str(x)
    z = [0 for i in range (10)]
    
    for i in s:
        z[ord(i) - 48] += 1
    
    mx = ""; mn = ""
    for i in range (9,-1,-1):
        for j in range (z[i]):
            mx += str(i)

    for i in range(1,10):
        if z[i] > 0:
            z[i] -= 1
            mn += str(i)
            break
    for i in range (0,10):
        for j in range (z[i]):
            mn += str(i)
            
    return int(mx), int(mn)
    
if __name__ == "__main__":
    print(maxmin(9876543210))     