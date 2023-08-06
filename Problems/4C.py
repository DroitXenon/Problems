n = int(input())
database = {}
for i in range(n):
    input_ = input()
    if input_ in database:
        database[input_] += 1
        print(f'{input_}{database[input_]}')
    else:
        database[input_] = 0
        print('OK')