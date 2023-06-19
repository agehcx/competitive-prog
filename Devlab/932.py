## https://www.borntodev.com/devlab/task/932 ##
## Python sol

import math

a,b = [int(input()) for i in range(2)]
MOD = 1000000007
ans = ( ( math.floor( (math.log10(a)*b) ) + 1 ) % MOD)
print(int(ans))
