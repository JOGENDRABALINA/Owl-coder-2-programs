n=int(input())
for s in range(n):
    m=[]
    a=input()
    for i in range(1,9):
        l=input()
        m.append(l)
    for i in range(1,7):
        for j in range(1,7):
            if(m[i][j]=='#'):
                if(m[i-1][j-1]=='#' and m[i+1][j-1]=='#' and m[i-1][j+1]=='#' and m[i+1][j+1]=='#'):
                    print(i+1,j+1)
