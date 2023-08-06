n = int(input())
a = [[0 for i in range(n*2+2)] for j in range(2*n+2)]
for i in range(1, n*2+2):
    for j in range(1, n*2+2):
        if (i <= n+1) & (j <= n+1):
            a[i][j] = i+j-(n+2)
            if a[i][j] < 0:
                print(' ', end='')
            else:
                print(a[i][j], end='')
        elif (i <= n+1) & (j > n+1):  
            a[i][j] = i-j+n
            if a[i][j] < 0:
                continue
            else:
                print(a[i][j], end='')
           
        elif (i > n+1) & (j <= n+1):
            a[i][j] = j-i+n
            if a[i][j] < 0:
                print(' ', end='')
            else:
                print(a[i][j], end='')
        else:
            a[i][j] = -(i+j)+(3*n+2)
            if a[i][j] < 0:
                continue
            else:
                print(a[i][j], end='')
        print(' ',end='')
    print("\n")
