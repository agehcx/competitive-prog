def zeroes_everywhere(x):
    return sum(x//(5**i) for i in range(1,10))

if __name__ == "__main__":
    print(zeroes_everywhere(5))