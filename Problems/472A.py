def composite(numberin):
    for i in range(2, numberin):
        if numberin % i == 0:
            return True
    return False


number_in = int(input())
for num1 in range(4, number_in):
    if composite(num1) and composite(number_in-num1):
        print(num1, number_in-num1)
        break
