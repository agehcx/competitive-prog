import math
def isPrime(x):
    for i in range (2, int(math.ceil(x ** 0.5))):
        if x % i == 0: return False
    return True

def PrimeFactor(x):
    if(isPrime(x)): return "Prime"
    res = []
    for i in range (2, x + 1):
        while (x % i == 0):
            x = x // i
            if i not in res: res.append(i)
    
    primeList = []
    for i in res:
        if isPrime(i) or i == 2: primeList.append(i)
    
    return len(primeList)    
if __name__ == "__main__":
    print(PrimeFactor(81))