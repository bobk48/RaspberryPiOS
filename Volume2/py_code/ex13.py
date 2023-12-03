L = [1, 2, 3]
M = [4, 5, 6]
N = [7, 8, 9]
F = open('listw.txt','w')
F.write(str(L) + '\n')
F.write(str(M) + '\n')
F.write(str(N) + '\n')
F.close()