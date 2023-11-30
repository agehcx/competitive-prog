def isPrime(x):
    if not x & 1: return False 
    for i in range (3, int(x ** 0.5) + 1, 2):
        if x % i == 0: return False
    return True

def prime_gaps(g,a,b):
    prev = 0
    if a != 2 and a % 2 == 0: a += 1
    if b != 2 and b % 2 == 0: b += 1
    for i in range (a, b + 1, 2):
        if isPrime(i):
            if i - prev == g:
                return [prev, i]
            prev = i
            
if __name__ == "__main__":
    print(prime_gaps(2,3,50))