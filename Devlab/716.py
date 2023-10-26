# https://www.borntodev.com/devlab/task/716
for i in range(int(input())):
    list = input().split(", ")
    print( ( (-1)**(len(list)+1)) * (int(list[0])) * (int(list[len(list)-1] )))
