def Isekai(a,b):
    if b == 0: return True
    x = [False for _ in range(0, b + 1)]
    for i in a:
        if i <= b: 
            x[i] = True 
    for i in a:
        for j in range (i, b + 1):
            if x[j - i] == True:
                x[j] = True
                
    return x[b]   
    
if __name__ == "__main__":
    print(Isekai([3,7,9],17))    